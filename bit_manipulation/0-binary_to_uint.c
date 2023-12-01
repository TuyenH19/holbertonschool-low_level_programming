#include "main.h"

/**
* binary_to_uint - convert a binary number to an unsigned int
* @b: the binary number
* Return: unsigned int number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, sum, pow, base, len;

	base = 2;
	pow = 1;
	sum = 0;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
		len++;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = len - 1; j > 0; j--)
		{
			pow *= base;
		}
		sum = sum + (pow * (b[i] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
