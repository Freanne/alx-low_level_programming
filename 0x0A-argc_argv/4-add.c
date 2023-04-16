#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -Entry point.
 * @argc : The number of arguments.
 * @argv : The pointer.
 *
 * Return : Always 0.
 */

int main(int argc, char *argv[])
{
int result = 0, i = 1, j;
int num = atoi(argv[i]);

if (argc == 1) {
printf("0\n");
return (0);
}


for (i = 1; i < argc; i++) {
for (j = 0; argv[i][j] != '\0'; j++) {
if (!isdigit(argv[i][j])) {
printf("Error\n");
return (1);
}
}

if (num < 0) {
printf("Error\n");
return (1);
}
result += num;
}

printf("%d\n", result);
return (0);
}
