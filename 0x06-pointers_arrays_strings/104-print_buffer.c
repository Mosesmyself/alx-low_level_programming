#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer.
 * @size: bytes of the buffer.
 * @b: buffer's pointer.
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int a, d, l;


	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:", a);
			for (d = a; d < a + 10; d++)
			{
				if (d % 2 == 0)
					printf(" ");
				if (d < size)
					printf("%.2x", *(b + d));
				else
					printf("  ");
			}
			printf(" ");
			for (l = a; l < a + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
