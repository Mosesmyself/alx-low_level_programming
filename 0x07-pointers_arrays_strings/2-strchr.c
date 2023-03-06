#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string.
 * @c: input char.
 * @s: input string.
 * Return: s or NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
