#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src  including the terminate
 * null byte (\0)
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + count) = '\0';

	return (dest);
}
