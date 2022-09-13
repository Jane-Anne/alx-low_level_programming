#include "main.h"

/**
 * _islower - functions checks lowercase characters
 *
 * @c: single letter input
 *
 * Return - always 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
