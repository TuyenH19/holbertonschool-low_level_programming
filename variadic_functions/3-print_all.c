#include "variadic_functions1.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - to print anything with format provided followed by a new line
 * @format: list of formats of the arguments
 *
 * Return: a string with n parameters and separators
*/
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *str, *separator = "";

	va_start(arg, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg, double));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nill)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
		printf("\n");
		va_end(arg);
	}
}
