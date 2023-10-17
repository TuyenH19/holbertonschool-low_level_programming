#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: Possible combination of one digit
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
