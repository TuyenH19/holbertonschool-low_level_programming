#include <stdio.h>
/*
 * main - Entry point
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
		putchar('');
		break;
	}
	putchar(',');
	putchar(' ');
	combi++;
}
return (0);
}
