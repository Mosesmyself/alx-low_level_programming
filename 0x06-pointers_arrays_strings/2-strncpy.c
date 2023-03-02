#include "main.h"

/**
 * _strncpy - writes a function that copies a string.
 * @src:source.
 * @dest: destination.
 * @n: specified byte.
 * Return: return a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
