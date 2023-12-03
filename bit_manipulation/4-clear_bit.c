#include "main.h"

/**
* clear_bit - set a value of a bit at index position to 0
* @n: pointer to the bit
* @index: position of bit to be manipulated
* Return: number after being manipulated
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int check;

	if (index > sizeof(size_t) * 8)
		return (-1);
	check = 1;
	check = check << index;
	if (((*n >> index) & 1) == 1)
		*n = check ^ *n;
	return (1);
}
