#include "main.h"

/**
 * _strcat - concatenates strings (two).
 * @src: source.
 * @dest: destination.
 * Return: pointer.
 */

char *_strcat(char *dest, char *src)
{
	char *dest_beginning = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

		return (dest_beginning);
}
