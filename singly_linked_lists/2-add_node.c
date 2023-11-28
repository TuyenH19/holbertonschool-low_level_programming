#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - address of new element
 * @head: pointe to the next list_t
 * @str: the string
 * Return: the address of new elements
*/

list_t *add_node(list_t **head, const char *str)
{
		list_t *new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);
		new->len = strlen(str);
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = *head;
		*head = new;
		return (new);
}
