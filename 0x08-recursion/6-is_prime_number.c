#include "main.h"

/**
 * is_prime_helper - checks a prime number.
 * @n: input.
 * @x: my parameter.
 * Return: 1 or 0.
 */

int is_prime_helper(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % x == 0 && x != n)
	{
		return (0);
	}
	else if (x == n)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, x + 1));
	}
}

/**
 * is_prime_number - detects if a number is a prime number.
 * @n: input.
 * Return: 0 or 1.
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
