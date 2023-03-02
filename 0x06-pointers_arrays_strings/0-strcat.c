#include "main.h"

/**
 * _strcat - concatenates two(2) strings.
 * @src: source.
 * @dest: destination.
 * Return: Returns a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)

{

	strcat(*dest, *src);
	return (dest);
}
