#include <stdio.h>
#include <stdlib.h>

#include "dog.h"


/**
 * print_dog - print a struct dog 
 * @d : the information of dog or an object of struct dog.
 *
 * Return : void.
 */

void print_dog(struct dog *d)

{
if (d != NULL)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}


