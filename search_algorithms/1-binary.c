#include"search_algos.h"
int binary_search_recursion(int *array, int left, int right, int value);
void print_array(int *array, int left, int right);
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	if	(array == NULL)
		return (-1);
	return (binary_search_recursion(array, 0, (int)size - 1, value));
}

/**
 * binary_search_recursion - recursion for binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: the lowest index of the array
 * @right: the highest index of the array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if not found
*/
int binary_search_recursion(int *array, int left, int right, int value)
{
	int mid = left + (right - left) / 2;

	print_array(array, left, right);

	if (array[mid] == value)
		return (mid);
	else if (left >= right)
		return (-1);
	else if (array[mid] < value)
		return (binary_search_recursion(array, mid + 1, right, value));
	else
		return (binary_search_recursion(array, left, mid - 1, value));
}
/**
 * print_array - print the array
 * @array: pointer to the first element of the array to search in
 * @left: the lowest index of the array
 * @right: the highest index of the array
 *
 * Return: the index where value is located or -1 if not found
*/
void print_array(int *array, int left, int right)
{
	int i = left;

	printf("Searching in array: ");
	for (; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
