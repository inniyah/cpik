
#ifndef ASSERT_H
#define ASSERT_H
/* since CPIK V0.5.0 */
#define assert(string) \
	((string) ? (0) : _assert(__LINE__, #string))

#endif
