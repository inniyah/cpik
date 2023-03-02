cpik_version = 0.7.4

SOURCES += asminstr.cpp \
breakinstr.cpp \
centity.cpp \
cexpr.cpp \
codegen.cpp \
compiler.cpp \
continueinstr.cpp \
xctype.cpp \
dowhileinstr.cpp \
entity.cpp \
exprinstr.cpp \
fctctx.cpp \
file.cpp \
flatten.cpp \
forinstr.cpp \
gotoinstr.cpp \
ifinstr.cpp \
instruction.cpp \
lexer.cpp \
linker.cpp \
locator.cpp \
main.cpp \
operation.cpp \
optimizer.cpp \
parser.cpp \
resultlocation.cpp \
returninstr.cpp \
staticbuffer.cpp \
stringlist.cpp \
symtab.cpp \
xtype.cpp \
utility.cpp \
whileinstr.cpp \
switchinstr.cpp \
structmember.cpp \
initializer.cpp \
portability.cpp \
assembler_optimizer.cpp \
Numeric.cpp


HEADERS += asminstr.h \
breakinstr.h \
centity.h \
cexpr.h \
codegen.h \
compiler.h \
continueinstr.h \
xctype.h \
dowhileinstr.h \
entity.h \
exprinstr.h \
fctctx.h \
file.h \
flatten.h \
forinstr.h \
gotoinstr.h \
ifinstr.h \
instruction.h \
lexer.h \
linker.h \
locator.h \
operation.h \
parser.h \
position.h \
resultlocation.h \
returninstr.h \
staticbuffer.h \
stringlist.h \
symtab.h \
xtype.h \
utility.h \
whileinstr.h \
switchinstr.h \
structmember.h \
initializer.h \
portability.h \
assembler_optimizer.h \
Numeric.h


TEMPLATE = app

INSTALLS += target

CONFIG += warn_on  build_all
CONFIG -= debug
##CONFIG += debug_and_release
CONFIG -= qt thread

DISTFILES += Changelog cpik.vpj

# Qt 4 only - do not uncomment please
#CONFIG(debug, debug|release) {
#     TARGET = cpik-debug-$${cpik_version}
# } else {
#     TARGET = cpik-$${cpik_version}
# }

# works with Qt 3 & 4
unix {
    OBJECTS_DIR = ./objects
    TARGET = cpik-$${cpik_version}

    count(PREFIX,1) {
        target.path = $$PREFIX/bin
    }
    isEmpty(PREFIX) {
        PREFIX = /usr/share/cpik/$${cpik_version}
        target.path = /usr/bin/
    }

    DEFINES = PREFIX=$$PREFIX
    DEFINES += INLINE_SIMPLE_COMPARE


    docs.files = $${cpik_version}/doc/*
    docs.path = $$PREFIX/doc/
    INSTALLS += docs

    pic_includes.files = $${cpik_version}/include/*
    pic_includes.path = $$PREFIX/include/
    INSTALLS += pic_includes

    pic_slb.files = $${cpik_version}/lib/*
    pic_slb.path = $$PREFIX/lib/
    INSTALLS += pic_slb

    pic_src.files = $${cpik_version}/src/*
    pic_src.path = $$PREFIX/src/
    INSTALLS += pic_src

    pic_lkr.files = $${cpik_version}/lkr/*
    pic_lkr.path = $$PREFIX/lkr/
    INSTALLS += pic_lkr

}

win32 {
    CONFIG += console

    OBJECTS_DIR = ./objects
    TARGET = cpik-$${cpik_version}
    target.path = C:/cpik/$${cpik_version}/bin/
}
