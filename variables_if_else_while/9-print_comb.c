#include <stdio.h>

/**
 * main - Possible combination off one digit
 *
 * Return: Always 0 (Success)
*/

int main(void)

{
int combi;

combi = 48;
while (combi <= 57)
{
	putchar(combi);
	if (combi == 57)
	{
		putchar('\n');
		break;
	}
	putchar(',');
	putchar(' ');
	combi++;
}
return (0);
}
