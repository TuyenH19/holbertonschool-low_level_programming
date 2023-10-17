#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int y;
int z;

x = 48;
while (x <= 55)
{
	y = x + 1;
	while (y <= 56)
	{
		z = y + 1;
		while (z <= 57)
		{
			putchar(x);
			putchar(y);
			putchar(z);
			if (x == 55 && y == 56 && z == 57)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
			z++;
		} y++;
	} x++;
}

return (0);
}
