#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: input.
 * @accept: input string.
 * Return: pointer or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		for (int j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
