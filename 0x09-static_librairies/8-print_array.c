#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *@a:The array to be checked.
 *@n:The numbers to be checked.
 *
 * Return: array.
 */



void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
