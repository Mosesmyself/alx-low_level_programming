#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: pointer input 1.
 * @s2: pointer input 2.
 * Return: pointer or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	size_t lenght1;
	size_t lenght2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lenght1 = strlen(s1);
	lenght2 = strlen(s2);

	result = malloc((lenght1 + lenght2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, lenght1 * sizeof(char));
	memcpy(result + lenght1, s2, (lenght2 + 1) * sizeof(char));
	return (result);
}
