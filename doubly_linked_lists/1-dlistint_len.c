#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - print all elements of a dlistint_t
 * @h: pointer to a node
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count_node = 0;

	if (h == NULL)
		return (count_node);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		h = h->next;
		count_node++;
	}
	return (count_node);
}
