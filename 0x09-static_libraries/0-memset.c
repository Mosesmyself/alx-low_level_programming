#include <stddef.h>
#include "main.h"

/**
 * *_memset - fills constant byte into memory.
 * @b: the charcter.
 * @s: the pointer.
 * @n: the number of bytes.
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n--)
		*p++ = (unsigned char)b;
	return  (s);
}
