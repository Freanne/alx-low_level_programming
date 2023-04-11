#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * print_alphabet_x10 - Prints the alphabet
 * in lowercase ten times,
 * each time followed by a newline character.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int i, j;

for (i = 0 ; i < 10 ; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(letter + j);

}
_putchar('\n');
}
}

