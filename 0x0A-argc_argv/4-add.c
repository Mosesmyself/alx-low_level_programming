#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: count.
 * @argv: argument.
 * Return: 1 or 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0, x;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		int num = atoi(argv[x]);

		if (num == 0 && *argv[x] != '0')
		{
			printf("Error\n");
			return (1);
		}
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
