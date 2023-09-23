#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a new node at he beginning of a linkec adds
 * @head: pointer to the list_t list should be double
 * @str: add a new string the node
 *
 * Return: the address of the new element, or NULL if it fail
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	list_t *new_node = malloc(sizeof(list_t));
	if (!new)
	{
		return (Null);
	}

	char *str = strdup(str);
	if (!new)

	{

		free(new_node);

		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
