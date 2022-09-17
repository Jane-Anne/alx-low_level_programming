#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: return nothing
 */

void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch > 9)
			{
				putchar((ch / 10) + '0');
			}
			putchar((ch % 10) + '0');
		}
		putchar(10);
	}
}
