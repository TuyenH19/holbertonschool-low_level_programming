#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - to print all natural numbers from n to 98
 *
 * @n: the number inputed
 * Return: all natural numbers to 98
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{	
		i = n;
		while (i >= 98)
		{
			if (i == 98)
			{
				printf("98\n");
				break;
			}
			else
			{
				printf("%d, ", i);
				i--;
			}
		}
	}
	else
		if (n < 98)
		{
			i = n;
			while(i <= 98)
			{
				if (i == 98)
				{
					printf("98\n");
					break;
				}
				else
				{	
					printf("%d, ", i);
					i++;
				}
			}
		}
		else
			printf("%d\n", n);	

}
