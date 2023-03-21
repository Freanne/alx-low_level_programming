#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to be checked.
 *
 * Return : value of lastdigit.
 *
 *
 */
int print_last_digit(int n)
{
int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
return (lastdigit);
}

