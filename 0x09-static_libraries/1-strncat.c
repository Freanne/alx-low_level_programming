#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest : The string to be checked.
 * @src : The string to be checked.
 *@n : The number to be checked.
 *
 * Return : A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
