#include "main.h"

/**
 **leet -  encodes a string into 1337.
 *@str: input.
 *Return: str.
 */
char *leet(char *str)
{
	int count = 0, a;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(str + count) == low_letters[a] || *(str + count) == upp_letters[a])
			{
				*(str + count) = numbers[a];
				break;
			}
		}
		count++;
	}
	return (str);
}
