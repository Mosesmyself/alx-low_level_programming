#include "main.h"

/**
 * _strlen - returns strings' lenght.
 * @s: input string.
 * Return: the string's lenght.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
