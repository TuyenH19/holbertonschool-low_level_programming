#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
/**
 * print_char - print the arguments with only characters
 * @arg: arguments provided
 *
 * Return: characters
*/
void print_char(va_list arg)
{
	char char_arg = va_arg(arg, int);

	printf("%c", char_arg);
}

/**
 * print_int - print the arguments with integer value
 * @arg: arguments provided
 *
 * Return: integers
*/
void print_int(va_list arg)
{
	int int_arg = va_arg(arg, int);

	printf("%d", int_arg);
}

/**
 * print_float - print the arguments with float value
 * @arg: arguments provided
 *
 * Return: floats
*/
void print_float(va_list arg)
{
	float float_arg = va_arg(arg, double);

	printf("%f", float_arg);
}

/**
 * print_string - print the arguments with string value
 * @arg: arguments provided
 *
 * Return: strings
*/
void print_string(va_list arg)
{
	char *str_arg;

	str_arg = va_arg(arg, char *);

	if (!str_arg)
		str_arg = "(nil)";
	printf("%s", str_arg);
}

/**
 * print_all - to print anything with format provided followed by a new line
 * @format: list of formats of the arguments
 *
 * Return: a string with n parameters and separators
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	format_t func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		while (j < 4 && (*(format + i) != *(func[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			func[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
