#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the head of list_t
 * Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
