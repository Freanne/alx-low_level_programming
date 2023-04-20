#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anythings
 * @format : A list of types of arguments passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *          any other char should be ignored
 * @...: variable number of arguments
 *
 * Return : void.
 */

void print_all(const char * const format, ...)
{
unsigned int i = 0;
va_list args;
char *str, *sep = "";

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}

sep = ", ";
i++;
}

putchar('\n');
va_end(args);
}
