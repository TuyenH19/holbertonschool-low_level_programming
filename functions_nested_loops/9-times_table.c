#include "main.h"

/**
 * time_table - print the 9 times table that starts with 0
 *
 * @a: number of columns
 * @b: number of rows
 * Return: tabke of 9 times that starts with 0
 */

void times_table(void)
{
	int a, b, times;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			times = a * b;

			if (a >= 0 && b == 0)
				_putchar('0');
			else
			{	
				if (a == 0 && b != 0)
				{	 _putchar(',');
					 _putchar(' ');
					 _putchar(' ');
					 _putchar('0');
			} else
				{	
					if (times >= 10)
					{	_putchar(',');
						_putchar(' ');
						_putchar(times / 10 + '0');
						_putchar(times % 10 + '0');
					}
					else
					{	_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(times + '0');
					}
				}
			} b++;
		}	_putchar('\n');
			a++;
	}
}
