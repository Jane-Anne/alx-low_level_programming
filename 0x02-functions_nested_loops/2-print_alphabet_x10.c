#include "main.h"

/**
 * main 
 *
 * Return - Always zero 0 (Success)
 */

void print_alphabet_x10(void)
{
	int c, i;

	for(i = 0; i <= 9; i++)
	{
		for (c = 'a'; c<= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
