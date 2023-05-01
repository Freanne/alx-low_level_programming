#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * is_palindrome_helper - helper function for is_palindrome
 *
 * @s: the string to check
 * @i: current index
 * @j: opposite index
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int i, int j)
{

if (i >= j)
{
return (1);
}
if (s[i] != s[j])
{
return (0);
}
return (is_palindrome_helper(s, i + 1, j - 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 *
 * @s: the string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = strlen(s);

return (is_palindrome_helper(s, 0, len - 1));
}

