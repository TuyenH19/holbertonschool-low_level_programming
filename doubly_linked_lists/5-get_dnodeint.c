#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at the index
 * @head: first node
 * @index: the position of node
 * Return: the node at position index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	if (current == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}
