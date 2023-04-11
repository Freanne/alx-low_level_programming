#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n :  the number of times the character
 * \ should be printed.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
if (n != 0 && n > 0)
{
int i, t;

for (i = 0; i < n; i++)
{
for (t = 0; t < i; t++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
return;
}
}

