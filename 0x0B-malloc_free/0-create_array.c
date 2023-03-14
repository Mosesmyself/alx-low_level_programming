#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array.
 * @size: size of the array.
 * @c: input char.
 * Return: a pointer or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
	return (array);
}
