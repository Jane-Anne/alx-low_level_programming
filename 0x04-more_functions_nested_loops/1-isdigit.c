#include <stdio.h>
#include "main.h"

/**
 * int _isdigit - checks for digit 0 to 9
 * @c: is a digit
 * Return: 1 if c is a digit and 0 otherwise
 */
 int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
