#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * print_triangle - Prints a triangle,
 * followed by a new line.
 * @size : the size of the triangle.
 *
 * Return: void.
 */
void print_triangle(int size)
{
if (size != 0 && size > 0)
{
int i, j;

for (i = size; i >= 1; i--)
{
for (j = 1; j <= size; j++)
{
if (j < i)
{
_putchar(' ');
}
else
{
_putchar('#');
}
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
