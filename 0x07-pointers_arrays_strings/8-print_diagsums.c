#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: pointer.
 * @size: input.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size * size; x += size + 1)
	{
		sum1 += *(a + x);
	}
	for (x = size - 1; x < size * size - 1; x += size - 1)
	{
		sum2 += *(a + x);
	}
	printf("%d, %d\n", sum1, sum2);
}
