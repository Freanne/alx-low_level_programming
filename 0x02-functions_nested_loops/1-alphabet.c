#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
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
