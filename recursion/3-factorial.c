#include "main.h"

/**
 * factorial - to return the factorial of a given number
 * @n: number given
 *
 * Return: factorial value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
