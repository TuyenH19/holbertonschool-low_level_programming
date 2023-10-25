#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array input
 * @n: number of element of an array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int tmp;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

		start++;
		end--;
	}

}
