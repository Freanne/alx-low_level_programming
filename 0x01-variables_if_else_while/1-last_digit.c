#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d ",n);
int lastdigit=n%10;

printf(" is %d ",lastdigit);
if(lastdigit > 5)
printf("is greater than 5");
else if (lastdigit == 0)
printf("is 0");
else if(lastdigit < 6)
printf("is less than 6 and not 0");
return (0);
}

