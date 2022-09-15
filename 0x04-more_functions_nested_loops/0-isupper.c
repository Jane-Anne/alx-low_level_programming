#include "main.h"
#include <stdio.h>

/**
 * _isupper - check code for uppercase character
 *
 *@c: character to be tested
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	for ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
