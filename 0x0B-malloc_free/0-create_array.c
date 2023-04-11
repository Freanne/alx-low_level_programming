#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size : The number to be checked.
 * @char : The character to be checked.
 *
 * return : NULL if size is equal 0 , a pointer to the array tab . 
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
char *tab = (char *) malloc(size * sizeof(char));
int i;

for (i = 0; i < size; i++)
{
tab[i] = c;
}
return tab;
if (size == 0)
return NULL;

}
