#include "main.h"

/**
 * _strlen - string length function
 * @s: parameter
 * Return: return lrngth as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')

	len++;

	return (len);
}
