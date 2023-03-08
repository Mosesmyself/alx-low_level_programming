#include "main.h"

/**
 * _pow_recursion -returns the value of an input raised to power of the other.
 * @x: input 1.
 * @y: input 2.
 * Return: the value.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
