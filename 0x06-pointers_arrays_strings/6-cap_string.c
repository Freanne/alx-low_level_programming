#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @s: A pointer to the string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
    int i;

    /* Capitalize first character */
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] -= 32;
    }

    /* Capitalize subsequent characters */
    for (i = 1; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') &&
            (s[i-1] == ' ' || s[i-1] == '\t' || s[i-1] == '\n' ||
             s[i-1] == ',' || s[i-1] == ';' || s[i-1] == '.' ||
             s[i-1] == '!' || s[i-1] == '?' || s[i-1] == '"' ||
             s[i-1] == '(' || s[i-1] == ')' || s[i-1] == '{' ||
             s[i-1] == '}'))
        {
            s[i] -= 32;
        }
    }

    return s;
}

