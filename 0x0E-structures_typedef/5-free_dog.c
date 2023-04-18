#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t object
 * @dog: Pointer to the dog_t object to free
 *
 * This function frees the memory allocated for a dog_t object,
 * including the memory allocated for its name and owner fields.
 *
 * Return: None
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
