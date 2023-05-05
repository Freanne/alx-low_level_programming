#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * set_bit - Value of a bit at a given index.
 * @n : The number to be checked.
 * @index : is the index, starting from 0 of the bit you want to get.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
	return (-1);

*n |= 1UL << index;
return (1);

}
