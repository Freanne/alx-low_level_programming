#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s : The character to be checked.
 * @accept : The character to be checked.
 *
 * Return : The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 *
 */


unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
