#include "main.h"

/**
 * _islower - tests whether a character is a tests whether a character is a
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
