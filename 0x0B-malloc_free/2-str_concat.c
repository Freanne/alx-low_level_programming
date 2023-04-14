#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1 : The fistr string
 * @s2 : The twice string.
 *
 * Return : Pointer should point to a newly allocated space contain0s s1 and s1.
 */

char *str_concat(char *s1, char *s2)
{

int len1 = strlen(s1), len2 = strlen(s2);
char *ch1 = malloc(len1 * sizeof(char)), *ch2 = malloc(len2 * sizeof(char));
char *chaine = malloc((len1 + len2) * sizeof(char));

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

if (ch1 == NULL && ch2 != NULL)
{
free(ch1);
free(ch2);
return (ch2);
}
if (ch1 != NULL && ch2 == NULL)
{
free(ch1);
free(ch2);
return (ch1);
}
if (ch1 == NULL && ch2 == NULL)
{
free(ch1);
free(ch2);
return ("");
}

strcpy(ch1, s1);
strcpy(ch2, s2);



if (chaine == NULL)
{
free(ch1);
free(ch2);
return (NULL);


}
strcpy(chaine, ch1);
strcat(chaine, ch2);

return (chaine);




}
