#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * print_line - Draws a straight line in the terminal.
 *
 * Return: void.
 */
void print_line(int n)
{
if (n != 0 && n > 0)
{
for(int i = 0; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
