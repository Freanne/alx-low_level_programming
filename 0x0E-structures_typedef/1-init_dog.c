#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - Initialize a variable of type struct dog
 * @d : The object of struct dog.
 * @name : the name of dog
 * @age : the old of dog
 * @owner : the owner of the dog.
 *
 * Return : void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{

d -> name = name;
d -> age = age;
d -> owner = owner;

}
