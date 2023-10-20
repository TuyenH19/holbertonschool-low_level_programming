#include <stdio.h>

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{	
		printf("%d ", num);
		if (num % 3 == 0 && num % 5 == 0)
		{	
			printf("FizzBuzz ");
			continue;
		}
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
			continue;
		}
		if (num % 3 != 0 && num % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
	}
	printf("\n");
	return (0);

}
