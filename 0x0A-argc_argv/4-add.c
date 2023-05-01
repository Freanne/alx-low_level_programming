#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isdigit - checks if a given character is a digit
 *
 * @c: the character to check
 *
 * Return: 1 if @c is a digit, 0 otherwise
 */

int isdigit(int c)
{
return (c >= '0' && c <= '9');
}

/**
 * main - Entry point.
 * @argc : The number of arguments.
 * @argv : The pointer.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i, j;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
