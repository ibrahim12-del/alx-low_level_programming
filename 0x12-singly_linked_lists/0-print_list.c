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
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n ", h->len, h->str);

		h = h->next;
		s++;
	}

	return (s);
}
