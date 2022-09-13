#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *
 * @c: single letter input
 *
 * Return - always 1 if int c is lowercase, 0 if otherwise
 *
 * Return - 0 if int c is not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
