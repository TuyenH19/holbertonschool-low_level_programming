#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char rev_alp;

for (rev_alp = 'z'; rev_alp >= 'a'; rev_alp--)
	putchar(rev_alp);
putchar('\n');
return (0);
}
