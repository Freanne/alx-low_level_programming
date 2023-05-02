#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - Copy memories area.
 * @dest : the charactere to be checked.
 * @src : The characte to be checked.
 * @n : The numbers to be checked.
 *
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));

}
