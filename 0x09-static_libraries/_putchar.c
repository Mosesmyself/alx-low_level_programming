#include <unistd.h>

/**
 * _putchar - writes character to stdout.
 * @c: the character.
 * Return: the number of character or -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
