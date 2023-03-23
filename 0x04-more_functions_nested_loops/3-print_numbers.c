#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * print_numbers - Prints the numbers
 * from 0 to 9,
 * followed by a newline line.
 *
 * Return: void.
 */

void print_numbers(void)
{
char num = '0';

while (num <= '9')
{
_putchar(num);
num++;
}
_putchar('\n');
}

