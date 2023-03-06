#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input.
 * @accept: input string.
 * Return: len.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		len++;
		s++;
	}
	return (len);
}
