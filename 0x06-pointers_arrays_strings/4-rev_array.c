#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  reverse_array - Reverses the content of an array of integers.
 *
 * @a: A pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 * Return : void.
 */

void reverse_array(int *a, int n)
{
int i, j, tmp;

for (i = 0, j = n - 1; i < j; i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
