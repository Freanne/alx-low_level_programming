#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb : the number
 * @size : the size of byte in memory
 *
 * Return: a pointer to the allocated in memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
*(ptr + i) = 0;
return (ptr);
}
