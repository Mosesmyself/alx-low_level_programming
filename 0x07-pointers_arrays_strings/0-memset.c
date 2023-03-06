#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @b: constant byte.
 * @s: pointer.
 * @n: bytes.
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int j = 0; j < n; j++)
	{
		*(s + j) = b;
	}
	return (s);
}
