#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments passed to the program
 * @av: a pointer to an array of strings containing the arguments
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}

	str[k] = '\0';
	return (str);
}


