#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of a program.
 * @ac: argument.
 * @av: array pointer.
 * Return: a pointer or NULL.
 */

char *argstostr(int ac, char **av)
{
	int length, x, idx;
	char *result;


	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	length = 0;

	for (x = 0; x < ac; x++)
	{
		length += strlen(av[x]) + 1;
	}
	result = malloc(length * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	idx = 0;
	for (x = 0; x < ac; x++)
	{
		strcpy(&result[idx], av[x]);
		idx += strlen(av[x]);
		result[idx] = '\n';
		idx++;
	}
	result[idx] = '\0';
	return (result);
}

