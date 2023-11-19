#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct format_type - new struct type to define format
 * @symbol: symbal representing the data type
 * @print: a function pointer to a function that prints
 *			a data type corresponding to symbol
*/
typedef struct format_type
{
	char *symbol;
	void (*print)(va_list arg);
} format_t;

#endif
