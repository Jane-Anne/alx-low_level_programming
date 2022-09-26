#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: adress to memor
 * @b: char
 * @n: number of bytes
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
