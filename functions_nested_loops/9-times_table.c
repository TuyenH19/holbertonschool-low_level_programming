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

	a = 0;;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			times = a* b;
			if ( times >= 10)
			{
				_putchar(times / 10 + '0');
				_putchar(times % 10 + '0');
				_putchar(',');
				_putchar(' ');
				b++;
			}
			else
			{
				_putchar(times + '0');
				_putchar(',');
                                _putchar(' ');
                                b++;
			}
		}
		_putchar('\n');
		a++;
	}
}
