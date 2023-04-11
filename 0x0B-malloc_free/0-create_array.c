#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size : The number to be checked.
 * @c : The character to be checked.
 *
 * Return : NULL if size is equal 0,tab is success , ULL if fails.
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
char *tab = (char *) malloc(size * sizeof(char));
unsigned int i;

for (i = 0; i < size; i++)
{
tab[i] = c;
}
return (tab);
if (size == 0)
return (NULL);

if (tab == NULL)
return (NULL);

}
