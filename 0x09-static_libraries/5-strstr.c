#include "main.h"
/**
 * _strstr - looks for the occurence of a substring within a string
 * @haystack: string within which to search for substrings
 * @needle: substring to search for.
 * Return: pointer to beginning of the found substring, or NULL if it failed
 */


char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return ((char *)haystack);

	while (*haystack)
	{
		char *need_ptr = needle;
		char *hay_ptr = haystack;

		while (*hay_ptr && *need_ptr && (*hay_ptr ==
					*need_ptr))
		{
			hay_ptr++;
			need_ptr++;
		}
		if (*need_ptr == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
