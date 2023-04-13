#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - Reurns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str : The string to be duplicated.
 *
 * Return : pointer to the duplicated string.
 *
 */


char *_strdup(char *str)
{
int length = strlen(str);
char *chaine = malloc(length * sizeof(char));

if (str == NULL)
return (NULL);
chaine = strcpy(chaine, str);
return (chaine);
free(chaine);
if (chaine == NULL)
return (NULL);

}
