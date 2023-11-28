#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print all elememts of list_t
 * @h: pointer to a node
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int count_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count_node++;
	}
	return (count_node);
}
