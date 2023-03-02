#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two string with specification.
 * @src: source.
 * @dest: destination.
 * Reurn: return a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[dest_len + a] = src[a];
		a++;
	}
	dest[dest_len + a] = '\0';

	return (dest);

}
