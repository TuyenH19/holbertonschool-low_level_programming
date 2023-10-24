#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array
 * @a: array input
 * @n:number of element
 *
 * Return: nothing.
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d, ", a[index]);
		if (index == n-1)
		{
			printf("%d", a[index]);
			break;
		}
	}
	printf("\n");
}
