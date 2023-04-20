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
char *separator = "";
const char * const specifiers = "cifs";

va_start(args, format);

while (format && format[i])
{

if (format[i] == specifiers[0] || format[i] == specifiers[1] || format[i] == specifiers[2] || format[i] == specifiers[3])
{

printf("%s", separator);

switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f",(float)va_arg(args, double));
break;
case 's':
if (va_args(args, char *) == NULL)
printf("(nil)");
else
printf("%s", va_arg(args, char *));
break;
default:
break;
}
separator = ", ";
}

i++;
}
va_end(args);
putchar('\n');

}
