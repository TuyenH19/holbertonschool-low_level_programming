#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int y;

x = 48;
while (x <= 57)
{
	y = x + 1;
	while (y <= 57)
	{
		putchar(x);
	 	putchar(y);
		if (x == 56 && y == 57)
		{
			putchar('\n');
			break;
		}
		y++;
		putchar(',');
		putchar(' ');
	}
	x++;	
} 
return (0);
}
