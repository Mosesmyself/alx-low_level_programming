#include "main.h"

/**
 **leet -  encodes a string into 1337.
 *@str: input.
 *Return: str.
 */
char *leet(char *str)
{
	char leet_map[256] = {0};

	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	char *p = str;

	while (*p != '\0')
	{
		if (leet_map[*p] != 0)
		{
			*p = leet_map[*p];
		}
		p++;
	}
	return (str);
}
