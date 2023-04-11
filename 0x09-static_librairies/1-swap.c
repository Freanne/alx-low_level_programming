#include <stdio.h>
#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 *@a:The numbers to be checked.
 *@b :The numbers to be checked.
 *
 * Return: a and b.
 */


void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
