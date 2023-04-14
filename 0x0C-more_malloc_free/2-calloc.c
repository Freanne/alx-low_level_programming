#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemeb : the number
 * @size : the size of byte in memory
 *
 * Return : a pointer to the allocated in memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);

if (p == NULL)
return (NULL);

memset(p, 0, nmemp * size);

return p;




}
