#include "main.h"

/**
 * more_numbers - to print 10 times from 0 to 14
 *
 * Return: 10 times frokm 0 to 14 and followed by new line
 */

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <=10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			
		}
		_putchar('\n');
	}
}
