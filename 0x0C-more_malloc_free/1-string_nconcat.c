#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to newly allocated string containing the concatenation
 *         of s1 and the first n bytes of s2, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = 0, s2_len = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	result = malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}

