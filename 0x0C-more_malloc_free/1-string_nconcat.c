#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1 : The character to be checked.
 * @s2 : The character to be checked.
 * @n : The int.
 *
 * Return:   pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, len;
	char *result, *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	len = len1 + n;

	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	p = result;
	while (*s1 != '\0')
		*p++ = *s1++;
	while (n-- > 0)
		*p++ = *s2++;
	*p = '\0';

	return (result);

}
