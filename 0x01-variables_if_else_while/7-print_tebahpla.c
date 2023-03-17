#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit = 'z';

while (digit >= 'a')
{
putchar(digit);
digit--;
}
putchar('\n');
return (0);
}
