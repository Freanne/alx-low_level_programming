#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char d[10] = "0123456789", digit = 'a';
int i;

for (i = 0; i < 10; i++)
{
putchar(d[i]);
}
while (digit <= 'f')
{
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}
