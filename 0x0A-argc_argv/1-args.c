#include <stdio.h>
#include "main.h"

/**
 * main - prints the number the number of argument passed into it.
 * @argc: count.
 * @argv: argument.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
