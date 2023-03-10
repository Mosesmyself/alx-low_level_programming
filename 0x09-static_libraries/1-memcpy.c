#include "main.h"

/**
 * *_memcpy - copies bytes from source to destination.
 * @src: source.
 * @dest: destination.
 * @n: bytes to be copied.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}
