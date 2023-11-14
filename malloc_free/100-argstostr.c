#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments
 * @ac: number of arguments
 * @av: name of arguments
 *
 * Return: pointer to a new string with names of arguments
*/

char *argstostr(int ac, char **av)
{
	int index = 0, len = 0, i, j;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}

	str = malloc(sizeof(char) * (len + ac + 1));
	if (!str)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[index] = av[i][j];
			index++;
		}
		if (i < ac - 1)
		{
			str[index] = '\n';
			index++;
		}
	}
	str[index] = '\n';
	return (str);
}	
