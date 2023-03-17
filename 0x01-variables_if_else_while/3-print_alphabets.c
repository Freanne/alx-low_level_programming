#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a', letter2 = 'A';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
while (letter2 <= 'Z')
{
putchar(letter2);
letter2++;
}
putchar('\n');
return (0);
}
