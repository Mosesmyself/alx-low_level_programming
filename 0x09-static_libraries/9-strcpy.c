#include "main.h"

/**
 * *_strcpy - copies strings pointed by source to the destination.
 * @src: source.
 * @dest: destination.
 * Return: a point to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *beginning = dest;

	while (*dest++ = *src++)
		;
	return (beginning);
}
