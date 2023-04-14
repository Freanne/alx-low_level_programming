#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemeb : the number
 * @size : the size of byte in memory
 *
 * Return : a pointer to the allocated in memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p = malloc(nmemb * size);

if (nmemb == 0 || size == 0)
return (NULL);

if (p == NULL)
return (NULL);

memset(p, 0, nmemb * size);

return p;




}
