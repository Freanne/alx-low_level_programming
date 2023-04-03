#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Copy memories area.
 * @dest : the destination .
 * @src : The source 
 * @n : The numbers.
 *
 * Return : A pointer to dest .
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n--)
*dest++ = *src++;
return dest;

}
