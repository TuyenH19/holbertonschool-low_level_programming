#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string concatenated
*/

char *str_concat(char *s1, char *s2)
{
int i, j, index;
char *string;

if (!s1)
s1 = NULL;
if (!s2)
s2 = NULL;

i = 0;
while (s1[i] != '\0')
i++;

j = 0;
while (s2[j] != '\0')
j++;

string = malloc(sizeof(char) * (i + j + 1));

if (string == NULL)
return (NULL);

index = 0;
while (index < i)
{
string[index] = s1[index];
index++;
}
index = 0;
while (index < j)
{
string[index + i] = s2[index];
index++;
}
string[i + j] = '\0';
return (string);
}
