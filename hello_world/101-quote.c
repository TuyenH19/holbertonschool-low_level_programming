#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int  main(void)
{
int len = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len+1); 
return (1);
}
