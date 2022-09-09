#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - to print if the number is greater than 0,
 * less than 0,
 * or equal to 0
 * Return: always success
 */

int main(void)

{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
