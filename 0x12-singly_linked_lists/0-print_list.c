#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of linked list
 * @h: poonter to the list-t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h != NULL)
			printf("[0] (nil)\n");
		else
			printf(" [%d] %s\n ", h->len, h->str);

		node_count++;
		h = h->next;
	}

	return (node_count);
}
