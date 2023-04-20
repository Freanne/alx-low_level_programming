#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints Strings, followed by a new line.
 * @separator : The string to be printed between the strings.
 * @n :  the number of strings passed to the function
 * Return : void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list str;
char *string;

va_start(str, n);
for (i = 0; i < n; i++)
{
string = va_arg(str, char *);
if (string == NULL)
printf("(nil)");
else
printf("%s", string);

if (i < n - 1 && separator != NULL)
printf("%s", separator);

}
va_end(str);
putchar('\n');

}
