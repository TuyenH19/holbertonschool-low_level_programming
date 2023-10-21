#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers
 * @num1: first two-digit number
 * @num2: second two-digit number
 *
 * Return: Always 0
 */

int  main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');
			if (num1 == 98 && num2 == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
