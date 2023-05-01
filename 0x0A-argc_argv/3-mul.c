#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point .
 * @argc : The number of arguments.
 * @argv : Array of pointer.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
int product;

    /* Check if the program was executed with two arguments */
if (argc != 3)
{
printf("Error\n");
return (1);
}

    /* Convert arguments to integers and multiply them */
product = atoi(argv[1]) * atoi(argv[2]);

    /* Print the result */
printf("%d\n", product);
return (0);
}
