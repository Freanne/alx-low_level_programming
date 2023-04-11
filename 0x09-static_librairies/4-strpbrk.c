#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * __strpbrk - Searches a string for any of a set of bytes.
 * @s :   The character to be checked.
 * @accept : The character to be checked.
 *
 * Return :  a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 *
 */


char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
