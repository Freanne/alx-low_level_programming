#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Splits a string into words
 *
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words)
 *         NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int i, j, k, len, words;
	char **arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	len = strlen(str);
	for (i = 0, words = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
	}
	if (words == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0, j = 0; j < words; j++)
	{
		while (str[i] == ' ')
			i++;
		for (k = i; str[k] != ' ' && k < len; k++)
			;
		arr[j] = malloc(sizeof(char) * (k - i + 1));

		if (arr[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(arr[j]);

			free(arr);
			return (NULL);
		}
		strncpy(arr[j], &str[i], k - i);
		arr[j][k - i] = '\0';
		i = k;
	}
	arr[j] = NULL;
	return (arr);
}

