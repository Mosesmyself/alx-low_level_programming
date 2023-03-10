#include "main.h"
#include <stddef.h>

/**
 * *_strstr - detects a substring.
 * @haystack: input string.
 * @needle: input substring.
 * Return: a pointer or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;

	while (*p)
	{
		char *h = p;
		char *n = needle;

		while (*n && *n == *h)
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}
