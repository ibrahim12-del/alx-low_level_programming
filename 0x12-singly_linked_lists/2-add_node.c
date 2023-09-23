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

	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
