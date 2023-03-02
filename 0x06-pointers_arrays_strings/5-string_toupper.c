#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @st: pointer to the string.
 * Return: pointer.
 */
char *string_toupper(char *st)
{
	int x;

	for (x = 0; st[x] != '\0'; x++)
	{
		if (st[x] >= 'a' && st[x] <= 'z')
		{
			st[x] = st[x] - ('a' - 'A');
		}
	}
	return (st);
}
