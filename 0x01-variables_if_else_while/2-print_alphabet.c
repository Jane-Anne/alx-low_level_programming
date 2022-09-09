#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * putchar to prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char love;

	for (love = 'a'; love <= 'z'; love++)
		putchar(love);
	putchar('\n');
	return (0);
}
