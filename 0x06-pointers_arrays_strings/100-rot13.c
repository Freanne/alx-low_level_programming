#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - Encode a string using rot13.
 * @str: The sring to be encoded.
 * Return: The encoding.
 */
char *rot13(char *str)
{
char *result = str;
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
result[i] = (((str[i] - 'A') + 13) % 26) + 'A';
}
else if (str[i] >= 'a' && str[i] <= 'z')
{
result[i] = (((str[i] - 'a') + 13) % 26) + 'a';
}

return (result);

}
