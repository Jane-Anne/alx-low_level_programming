#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - function that concatenates two strings
 * @src: source
 * @dest: destination
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (cunt2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
