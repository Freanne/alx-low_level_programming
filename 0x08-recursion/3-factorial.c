#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * factorial - The factorial of a given number.
 * @n : The int to be give a factorail.
 *
 * Return: -1 if n lower than 0,
 * 1 if n is equal at 0,factorial(n) if n is greater than 0.
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
