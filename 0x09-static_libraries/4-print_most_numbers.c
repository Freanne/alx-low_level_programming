#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * print_most_numbers - Prints the numbers
 * from 0 to 9 without 2 and 4,
 * followed by a newline line.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
char letter = '0';

while (letter <= '9')
{
if (letter != '2' && letter != '4')
putchar(letter);
letter++;
}
putchar('\n');
}
