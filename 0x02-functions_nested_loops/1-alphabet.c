#include "main.h"

/**
 * main - print alphabet in lower case
 *
 * Return: 0 always success
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}

	_putchar('\n');

}
