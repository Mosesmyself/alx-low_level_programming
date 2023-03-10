#include "main.h"

/**
 * _puts - prints a string to stdout.
 * @s: input.
 * Return: void.
 */

void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
}
