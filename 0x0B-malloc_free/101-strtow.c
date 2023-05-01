#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words), or NULL if failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, len, count = 0, start = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
	{
		len = 0;
		for (j = start; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
				start++;
			else if (str[j + 1] == ' ' || str[j + 1] == '\0')
			{
				words[i] = malloc(sizeof(char) * (len + 2));
				if (words[i] == NULL)
				{
					for (i = i - 1; i >= 0; i--)
						free(words[i]);
					free(words);
					return (NULL);
				}
				for (j = 0; j <= len; j++)
					words[i][j] = str[start + j];
				words[i][len + 1] = '\0';
				start += len + 2;
				break;
			}
			else
				len++;
		}
	}
	words[count] = NULL;
	return (words);
}

