#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
int i = 1;
char *p = char * &i;
return (*p == 1);
}
