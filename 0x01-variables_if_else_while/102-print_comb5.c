#include <stdio.h>

/**
 * main - Entry point
 *  Return:0 Always Success
 */

int main(void)

{
	int i = 0, j;

	while (i <= 99)
	{
	j = i;
	while (j <= 99)
	{
	if (j != i)
	{
	putchar((i / 10) + 48);
	putchar((i % 10) + 48);
	putchar(' ');
	putchar((j / 10) + 48);
	putchar((j % 10) + 48);

	if (i != 98 || j != 98)
	{
	putchar(',');
	putchar(' ');
	}
	}
	++j;
	}
	++i;
	}
	putchar('\n');
	return (0);
}
