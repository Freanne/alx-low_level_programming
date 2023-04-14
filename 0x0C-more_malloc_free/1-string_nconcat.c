#include <stdio.h>
#include <stdlib.h>
#include "main.h"


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

int len1 = strlen(s1), len2 = strlen(s2);

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

if (n >= len2)
n = len2;

char *chaine = malloc((len1 +n) * sizeof(char));

if (chaine == NULL)
return (NULL);

memcpy(chaine, s1, s1_len);
memcpy(chaine + s1_len, s2, n);
chaine[s1_len + n] = '\0';

return (chaine);

}
