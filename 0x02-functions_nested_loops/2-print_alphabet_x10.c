#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
char letter = 'a';

while (letter <= 'z')
{
int i=0;

while(i<10)
{
_putchar(letter);
i++;
}
letter++;
_putchar('\n');
}
}
