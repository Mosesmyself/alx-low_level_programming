#include "main.h"

/**
 * _strcmp - writes a function that compares two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int b;

	for (b = 0; s1[b] != '\0' && s2[b] != '\0'; a++)
	{
		if (s1[b] != s2[b])
			return (s1[b] - s2[b]);
	}
	return (s1[b] - s2[b]);
}
