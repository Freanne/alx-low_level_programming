#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * print_square - Prints a square,
 * followed by a new line.
 * @size : the size of the square.
 *
 * Return: void.
 */
void print_square(int size)
{
if (size != 0 && size > 0)
{
int i, k;

for (i = 0; i < size; i++)
{
for (k = 0; k < size; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
return;
}
}
