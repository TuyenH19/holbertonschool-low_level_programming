#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function to print number with separator
* @separator: string between numbers
* @n: number of integers
* Returns: numbers with separators
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
