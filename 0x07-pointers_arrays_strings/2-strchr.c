#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locates a charater in a string.
 *@s : The character to be checked.
 *@c : The character to be checked.
 *
 * Return : The first occurence of the character c in the string
 * or NULL , il the character is not found.
 *
 */


char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return s;

s++;
}
if (c == '\0')
return s;


return NULL;
}

