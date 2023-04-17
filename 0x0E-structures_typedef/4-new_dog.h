#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/*
 * Creates a new dog with the given parameters.
 * Parameters:
 *   name - the name of the dog
 *   age - the age of the dog
 *   owner - the name of the dog's owner
 * Returns:
 *   a pointer to the new dog
 */


dog_t *new_dog(char *name, float age, char *owner)

{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL) {
return NULL;
}

new_dog->owner = malloc(strlen(name) + 1);
if (new_dog->name == NULL) {
free(new_dog);
return NULL;
}
strcpy(new_dog->name, name);
new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL){
free(new_dog->name);
free(new_dog);
return NULL;
}
strcpy(new_dog->owner, owner);
new_dog->age = age;
return new_dog;



}
