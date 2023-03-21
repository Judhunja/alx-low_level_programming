#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) do { \
	if (x < 0) \
	printf("%d", x + -(2 * (x))); \
	else \
	printf("%d", x); \
} while (0)

#endif
