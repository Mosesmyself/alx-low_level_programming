#include "main.h"

/**
 * _isalpha - checks for alphabet.
 * @c: input.
 * Return: 1 or 0.
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
