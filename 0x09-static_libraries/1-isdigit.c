#include "main.h"

/**
 * _isdigit - detects if a character is a digit.
 * @c: input character.
 * Return: 1 0r 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
