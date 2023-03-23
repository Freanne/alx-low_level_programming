#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n :  the number of times the character
 *\ should be printed.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
int i;

for (i = 1; i <= n; i++)
{
int t;

for (t = 1; t <= i; t++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}

