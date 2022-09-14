#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from 98
 *separate with comma then space
 * 
 * @n: beging counting
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
