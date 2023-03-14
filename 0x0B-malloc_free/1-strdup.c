#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a new string.
 * @str: pointer to the string.
 * Return: a pointer or a NULL.
 */

char *_strdup(char *str)
{
	size_t lenght;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	lenght = strlen(str) + 1;
	copy = malloc(lenght * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	memcpy(copy, str, lenght * sizeof(char));
	return (copy);
}
