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
 * Return :   pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int len1 = strlen(s1), len2 = strlen(s2);
char *chaine = malloc( len1 + n + 1);

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

if (n >= len2)
n = len2;


if (chaine == NULL)
return (NULL);

memcpy(chaine, s1, len1);
memcpy(chaine + len1, s2, n);
chaine[len1 + n] = '\0';

return (chaine);

}
