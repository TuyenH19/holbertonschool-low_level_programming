#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int  main(void)
{
char st[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, st, strlen(st));
return (1);
}
