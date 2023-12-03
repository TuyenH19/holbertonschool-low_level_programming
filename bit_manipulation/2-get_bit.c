#include "main.h"

/**
* get_bit - get value of bit at position index
* @n: binary number to check
* @index: index of bit to get value
* Return: 1 or 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return (n & 1);
}
