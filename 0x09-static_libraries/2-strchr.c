#include <stdio.h>
#include "main.h"
#include <string.h>

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
return (strchr(s, c));
}

