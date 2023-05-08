#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 *@filename: The name of the file to read
 *@letters: The numbers of letters it should read and print.
 *Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buffer = malloc(sizeof(char) * (letters + 1));
	ssize_t nb_read = fread(buffer, sizeof(char), letters, file);
	ssize_t nb_written = write(STDOUT_FILENO, buffer, nb_read);

	if (filename == NULL)
		return (0);
	if (file == NULL)
		return (0);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	if (nb_read <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[nb_read] = '\0';
	if (nb_written < nb_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);

	return (nb_read);
}
