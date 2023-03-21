#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 *function - print_alphabet_x10
 *
 * Return: void.
 */

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
