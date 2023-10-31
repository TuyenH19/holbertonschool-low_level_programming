#include "main.h"
#include <stdio.h>

/**
 * check_prime - to check if a number is a prime number
 * @n: number input
 * @i: element to check
 *
 * Return: 1 if prime and 0 if not
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if ((n % i) == 0 && i > 1)
		return (0);
	if ((n / i) == 1)
		return (1);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - to check if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
