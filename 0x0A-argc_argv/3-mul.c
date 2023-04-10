#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point .
 * @argc : The number of arguments.
 * @argv : Array of pointer.
 *
 * Return : Always 0.
 */

int main(int argc, char *argv[])
{
int result, x = atoi(argv[1]), y = atoi(argv[2]);

result = x * y;
printf("%d\n", result);
if (argc != 3)
{
printf("Error\n");
return (1);
}
if (x == 0 || y == 0)
printf ("Error");

return (0);
}
