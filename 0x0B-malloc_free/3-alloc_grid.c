#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width : The width of the array.
 * @heigth : the heigth of the array.
 *
 * Return : On success, returns a pointer to the newly created array.
 *On failure,returns NULL.
 */


int **alloc_grid(int width, int heigth)
{
int i, j, **arr;

if (width <= 0 || heigth <= 0)
return (NULL);

arr = malloc(heigth * sizeof(int *));
if (arr == NULL)
return (NULL);

for (i = 0; i < heigth; i++)
{
arr[i] = malloc(width * sizeof(int));

if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(arr[j]);
}
free(arr);
}
for (j = 0; j < width; j++)
arr[i][j] = 0;

}
return (arr);
}
