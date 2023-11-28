#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - print the number all elememts of list_t
 * @h: pointer to a node
 * Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	int count_node = 0;

	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			count_node++;
		}
		else
			count_node++;
		h = h->next;
	}
	return (count_node);
}
