#include "main.h"

/**
 * _abs - to compute the absolute value of an integer
 *
 * @c: value of the input
 * Return: the absolute value of an integer
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = -c;
		return (c);
	}
	else
		return (c);
}
