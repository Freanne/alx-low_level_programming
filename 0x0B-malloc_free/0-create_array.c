#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size : The number to be checked.
 * @c : The character to be checked.
 *
 * Return : a pointer to the created array, or NULL if it fails
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
char *tab;
unsigned int i;

if (size == 0)
return (NULL);

tab = malloc (size * sizeof(char));

if (tab == NULL)
return (NULL);

for (i = 0; i < size; i++)
tab[i] = c;

return (tab);

}
