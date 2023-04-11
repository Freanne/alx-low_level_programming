#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * __strstr - locates a substring.
 * @haystack :  The character to be checked.
 * @needle : The character to be checked.
 *
 * Return : a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 */

char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
