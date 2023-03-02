#include "main.h"

/**
 * _strcat - concatenates two(2) strings.
 * @src: source.
 * @dest: destination.
 * Return: Returns a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)

{

	int a, b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	{
		b = 0;
		while (src[b] != '\0')
			dest[a] = src[b];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
