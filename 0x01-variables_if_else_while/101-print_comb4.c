#include <stdio.h>

/**
 * main - Entry point
 *  Return:0 Always Success
 */

int main(void)

{
	int i = 0, j, k;

	while (i <= 9)
	{

	j = 0;

	while (j <= 9)

	{

	k = 0;
	while (k <= 9)

	{

	if (i != j && i < j && j != k && j < k)

	{

	putchar(i + 48);
	putchar(j + 48);
	putchar(k + 48);
	if (i + j + k != 24)
	{
	putchar(',');
	putchar(' ');

	}

	}
	++k;
	}
	++j;
	}
	++i;
	}
	putchar('\n');
	return (0);
}