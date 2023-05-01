#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_number -  prints an integer.
 * @n : The number to be checked.
 * Return: integer.
 */

void print_number(int n)
{
int divisor = 1;

if (n < 0)
{
_putchar('-');
n = -n;
}

while (n / divisor >= 10)
{
divisor *= 10;
}

while (divisor > 0)
{
_putchar('0' + (n / divisor));
n %= divisor;
divisor /= 10;
}
}
