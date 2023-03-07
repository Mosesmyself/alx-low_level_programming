#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard.
 * @a: pointer.
 */

void print_chessboard(char (*a)[8])
{
	int b = 0, c = 0;

	while (b < 8)
	{
		while (c < 8)
		{
			putchar(a[b][c]);
			c++;

		}
		putchar('\n');
		b++;
		c = 0;
	}
}
