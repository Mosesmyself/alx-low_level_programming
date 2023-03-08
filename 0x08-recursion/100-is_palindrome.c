#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - recursive helper.
 * @s: input string.
 * @x: my parameter1.
 * @len: my parameter2.
 * Return: 1 or 0.
 */

int is_palindrome_helper(char *s, int x, int len)
{
	if (x >= len)
	{
		return (1);
	}
	if (s[x] != s[len - 1 - x])
	{
		return (0);
	}
	return (is_palindrome_helper(s, x + 1, len));
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: input string.
 * Return: 1 or 0.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len));
}
