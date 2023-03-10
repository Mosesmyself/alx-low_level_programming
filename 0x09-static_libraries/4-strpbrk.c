#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * *_strpbrk - searches a string for bytes.
 * @s: input string.
 * @accept: the bytes.
 * Return: a pointer or '\0'.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
