#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to be checked.
 *
 * Return : value of lastdigit.
 */
int print_last_digit(int n)
{
int lastdigit;

lastdigit = n % 10;
return (lastdigit);
}

