#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum of all parameters
 *         0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;

/* initialize variable argument list */
va_start(args, n);

/* iterate through arguments and sum them up */
for (i = 0; i < n; i++)
sum += va_arg(args, int);

/* clean up variable argument list */
va_end(args);

return (sum);
}
