#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all its parametrs
 * @n : The number of integer for the function
 *
 * Return : The sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0, tmp;
va_list arg;

va_start(arg, n);
for (i = 0; i < n; i++)
{
tmp = va_arg(arg, int);
sum += tmp;
}
va_end(arg);
return (sum);
}
