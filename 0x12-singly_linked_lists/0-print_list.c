#include <stdio.h>
#include "lists.h"

/**
 * print_list - printed list
 * @h: poonter to the list-t list to print
 *
 * Return: the alx numbers of list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n ", h->len, h->str);

		node_count++;
		h = h->next;
	}

	return (node_count);
}
