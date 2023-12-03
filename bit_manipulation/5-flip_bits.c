#include "main.h"

/**
* flip_bits - number of bits needed to flip from number n to numer m
* @n: first number to compare
* @m: second number to compare
* Return: number of bits needed to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, result;

	result = n ^ m;
	for (flip = 0; result > 0;)
	{
		if ((result & 1) == 1)
			flip++;
		result = result >> 1;
	}
	return (flip);
}
