#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * putchar prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
