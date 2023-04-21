#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator : The string to be printed between numbers.
 * @n : The number of integer passed to the function
 * Return : void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg;
int tmp;

va_start(arg, n);
for (i = 0; i < n; i++)
{
tmp = va_arg(arg, int);
printf("%d", tmp);

if (i < n - 1 && separator != NULL) 
printf("%s", separator);

}
putchar('\n');
va_end(arg);
}
