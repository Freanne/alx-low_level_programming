#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - gets the length of a string
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int len = 0;

while (s[len])
len++;

return (len);
}

/**
 * mul - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 */
void mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, carry, n1, n2, res;
	int *result;

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			res = n1 * n2 + result[i + j + 1] + carry;
			carry = res / 10;
			result[i + j + 1] = res % 10;
		}
			if (carry > 0)
			result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		printf("0\n");
	else
	{
		while (i < len1 + len2)
			printf("%d", result[i++]);

		printf("\n");
	}
	free(result);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; argv[1][i]; i++)
	{

		if (!_isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; argv[2][i]; i++)
	{
		if (!_isdigit(argv[2][i]))
		{
			printf("Error\n");
			return (98);

		}

	}

	mul(argv[1], argv[2]);
	return (0);
}

