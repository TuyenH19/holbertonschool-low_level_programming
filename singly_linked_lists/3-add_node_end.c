#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add new element to the end
 * @head: pointe to the next list_t
 * @str: the string
 * Return: the address of new elements
*/

list_t *add_node_end(list_t **head, const char *str)
{
		list_t *ptr = *head;
		list_t *temp = malloc(sizeof(list_t));

		if (temp == NULL)
			return (NULL);
		if (str == NULL)
			return (NULL);
		temp->len = strlen(str);
		temp->str = strdup(str);
		temp->next = NULL;
		if (*head == NULL)
			*head = temp;
		else
		{
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = temp;
		}
		return (temp);
}
