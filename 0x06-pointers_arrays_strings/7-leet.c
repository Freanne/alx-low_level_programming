#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
 * @s: A pointer to the string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
    int i, j;
    char leet[] = "43071";

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; "AEOTLaeotl"[j] != '\0'; j++)
        {
            if (s[i] == "AEOTLaeotl"[j])
            {
                s[i] = leet[j / 2];
            }
        }
    }

    return s;
}

