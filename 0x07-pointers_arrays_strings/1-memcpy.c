#include "main.h"

/**
 * *_memcpy - copies memory area
 * @src: memory area to be copied from
 * @dest: memory area to a copied to
 * @n: number of bytes
 * Return: pointer to be the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
