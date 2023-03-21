#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) do { \
	if (x < 0) \
	printf("%d", x + -(2x)); \
	else \
	printf("%d", x); \
} while (1)

#endif
