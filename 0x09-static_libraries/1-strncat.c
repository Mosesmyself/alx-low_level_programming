#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two string.
 * @src: source.
 * @dest: destination.
 * @n: maximum bytes.
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
