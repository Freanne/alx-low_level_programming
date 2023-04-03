#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - Fills memory with a constant byte.
 * @*s : The pointer to be checked.
 * @b : The character to be checked.
 * @ : The number to be checked.
 *
 * Return : A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned char *p = s;
while (n--)
*p++ = (unsigned char) b;
return s;
}
