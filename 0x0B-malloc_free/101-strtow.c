#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * **strtow - splits a string into words.
 * @str: input.
 * Return: a pointer or NULL.
 */

char **strtow(char *str)
{
	int x, y, word_count = 0;
	char **words;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}

		words = malloc((strlen(str) + 1) * sizeof(char *));
		if (words == NULL)
		{
			return (NULL);
		}

		for (x = 0; str[x] != '\0'; x++)
		{
			if (!isspace(str[x]))
			{
				y = x;
				while (str[y] != '\0' && !isspace(str[y]))
					y++;
				words[word_count] = malloc((y - x + 1) * sizeof(char));
				if (words[word_count] == NULL)
				{
					for (x = 0; x < word_count; x++)
						free(words[x]);
					free(words);
					return (NULL);
				}
				strncpy(words[word_count], &str[x], y - x);
				words[word_count][y - x] = '\0';
				word_count++;
				x = y - 1;
			}
		}
		words[word_count] = NULL;
		return (words);
}
