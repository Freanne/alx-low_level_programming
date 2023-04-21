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
va_list args;
unsigned int i;
/* initialize variable argument list */
va_start(args, n);

/* print each argument followed by separator */
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (i < n - 1 && separator != NULL)
printf("%s", separator);

}

/* clean up variable argument list */
va_end(args);

/* print newline character */
printf("\n");
}
