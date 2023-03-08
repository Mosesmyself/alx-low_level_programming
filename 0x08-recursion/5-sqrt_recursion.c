#include "main.h"

/**
 * _sqrt_helper - finds the square root.
 *
 * @n:input.
 * @x:my parameter.
 * Return: natural square root.
 */

int _sqrt_helper(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (_sqrt_helper(n, x + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input.
 * Return: the square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}
