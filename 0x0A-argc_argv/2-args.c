#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc : The number to print the each arguments.
 * @argv : THe pointer .
 *
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc ; i++)
printf("%s\n", argv[i]);

return (0);
}
