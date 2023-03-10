#include "main.h"
#include <string.h>

/**
 * _strspn - detects the lenght of a substring.
 * @s: input.
 * @accept: the string to detect.
 * Return: count.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s++))
	{
		count++;
	}
	return (count);
}
