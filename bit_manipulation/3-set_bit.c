#include "main.h"

/**
* set_bit - set a value of a bit at index position to 1
* @n: pointer to the bit
* @index: position of bit to be manipulated
* Return: number after being manipulated
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int check;

	if (index > sizeof(size_t) * 8)
		return (-1);
	check = 1;
	check = check << index;
	*n = ((*n) | check);
	return (1);
}
