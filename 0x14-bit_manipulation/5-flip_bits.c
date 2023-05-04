#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * flip_bits - the number of bits you would need
 * to flip to get from one number to another.
 * @n : The number to be checked.
 * @m:the another number
 * Return: the number of bits.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int count = 0;
while (x)
{
count += x & 1;
x >>= 1;
}
return (count);
}
