#include "main.h"

/**
 * int _strlen - string length function
 * @s: parameter
 * Return: int
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
	count++;
	}
	return (count);
}
