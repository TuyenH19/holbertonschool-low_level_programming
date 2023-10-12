#include <stdio.h>
/**
 * sizeof evaluates the size of various types
 */
int main()
{
	char charType;
	int intType;
	long int longintType;
	long long int 2longintType;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of a int: %lu byte(s)\n", sizeof(intType));
	printif("Size of a long int: %lu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(2longintType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
