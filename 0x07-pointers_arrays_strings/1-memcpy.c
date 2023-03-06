#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @src: source..
 * @dest: destination.
 * @n: bytes.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	return (dest);
}
