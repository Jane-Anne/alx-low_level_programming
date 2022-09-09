#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * putchar prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char emmanuel;

	for (emmanuel = 'a'; emmanuel <= 'z'; emmanuel++)
		putchar(emmanuel);
	for (love = 'A'; emmanuel <= 'Z'; emmanuel++)
		putchar(emmanuel);
	putchar('\n');
	return (0);
}
