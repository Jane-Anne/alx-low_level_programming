#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints timestable for n
 *
 * @n: multiplication table requested
 *
 * Return: zero
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (!(n > 15 || n < 0))
	{
		for (num = 0; num <= n; num++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				prod = (num * mult);
				if (mult != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (prod < 10 && mult != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prod % 10) + '0');
				}
				else if (prod >=10 && prod < 100)
				{
					_putchar(' ');
					_putchar((prod / 10) + '0'); 
					_putchar((prod % 10) + '0');
				}
				else if (prod >= 100 && mult != 0)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
					_putchar((prod % 10) + '0');
				}
				else
					_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
