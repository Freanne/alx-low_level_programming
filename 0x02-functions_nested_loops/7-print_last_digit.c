#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to be checked.
 *
 * Return : lastdigit if lastdigit is greater than zero
 * -lastdigit if lastdigit is less than zero and print lastdigit.
 */
int print_last_digit(int n)
{
int lastdigit;

lastdigit = n % 10;

/* si la dernière chiffre est négative */
if (lastdigit < 0)
{
lastdigit *= -1;
}

/* imprimer la dernière chiffre */
_putchar('0' + lastdigit);
return (lastdigit);
}

