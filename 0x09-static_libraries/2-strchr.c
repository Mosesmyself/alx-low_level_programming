#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character.
 * @c: character.
 * @s: string.
 * Return: point or '\0'
 */

char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		s++;
	}
	return ((*s == c) ? s : NULL);
}
