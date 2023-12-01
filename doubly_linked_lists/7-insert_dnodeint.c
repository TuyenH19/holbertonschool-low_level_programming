#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - insert the node at the position idx
* @h: first node of list
* @idx: position of added node
* @n: data of node
* Return: address of the adding node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos;
	dlistint_t *head, *new;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		pos = 1;
		if (head != NULL)
		{
			while (head->prev != NULL)
				head = head->prev;
		}
		while (head != NULL)
		{
			if (pos == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			pos++;
		}
	}
	return (new);
}
