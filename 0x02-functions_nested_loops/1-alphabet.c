#include "main.h"

/**
 * main - print alphabet in lower case
 * Return: 0
 */

print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}

	_putchar('\n');

}
