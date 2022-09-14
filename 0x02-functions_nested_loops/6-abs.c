#include "main.h"
#include <stdio.h>
/**
 * _abs - will return the absolute value
 *
 *@c: int is the function for argument
 *
 * Return
 */
int _abs(int c)
{
	if (c > 0 || c ==0)
	{
		return (c);
	}
	else
		return (c * -1);
}
