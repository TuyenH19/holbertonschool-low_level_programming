#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free the list_t list
 * @head: pointer to the list_t
 * Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		list_t *next = temp->next;

		free(temp->str);
		free(temp);
		temp = next;
	}
}
