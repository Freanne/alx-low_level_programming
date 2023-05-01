#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a[] = {98, 402, 1983};
int *p;

p = a;
*(p + 2) = 98; /* Add this line to modify the value of a[2] */
printf("a[0] = %d, a[1] = %d, a[2] = %d\n", *p, *(p + 1), *(p + 2));

return (0);
}

