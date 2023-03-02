#include "main.h"
#include <ctype.h>

/**
 *cap_string - Capitalizes the first letter of each word in a string.
 *.
 *@str: input string.
 *Return: A pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int cap_next = 1;
	char *p = str;

	while (*p != '\0')
	{
		if (cap_next && isalpha(*p))
		{
			*p = toupper(*p);
			cap_next = 0;
		}
		else if (isspace(*p) || ispunct(*p))
		{
			cap_next = 1;
		}
		p++;
	}
	return (str);
}
