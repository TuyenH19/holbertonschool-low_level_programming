#include "main.h"
#include <stdio.h>

/**
 * _sqrt - return sqrt of a number
 * @n: number input
 * @i: sqrt value
 *
 * Return: sqrt value
 */
int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number input
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
