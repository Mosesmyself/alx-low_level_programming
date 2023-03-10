#include "main.h"

/**
 * *_strncpy -  copies a string up to a specified bytes.
 * @src: source.
 * @dest: destination.
 * @n: the specified number of  bytes.
 * Return: pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}
