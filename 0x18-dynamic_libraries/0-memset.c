#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s : The character to be checked.
 * @b : The character to be checked.
 * @n : The number to be checked.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
