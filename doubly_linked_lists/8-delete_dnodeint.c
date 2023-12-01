#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete node at position index
 * @head: first node of list
 * @index: position of deleted node
 * Return: 1 if succedded and -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp2;
	unsigned int pos;

	temp1 = *head;
	if (temp1 != NULL)
		while (temp1->prev != NULL)
			temp1 = temp1->prev;
	pos = 0;
	while (temp1 != NULL)
	{
		if (pos == index)
		{
			if (pos == 0)
			{
				*head = temp1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp2->next = temp1->next;
				if (temp1->next != NULL)
					temp1->next->prev = temp2;
			}
			free(temp1);
			return (1);
		}
		temp2 = temp1;
		temp1 = temp1->next;
		pos++;
	}
	return (-1);
}
