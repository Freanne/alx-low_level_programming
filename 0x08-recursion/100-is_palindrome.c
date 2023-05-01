#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * helper function for is_palindrome
 *
 * @param s the string to check
 * @param i current index
 * @param j opposite index
 * @return 1 if s is a palindrome, 0 otherwise
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
return (is_palindrome_helper(s, i+1, j-1));
}

/**
 * check if a string is a palindrome
 *
 * @param s the string to check
 * @return 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = strlen(s);

return (is_palindrome_helper(s, 0, len-1));
}

