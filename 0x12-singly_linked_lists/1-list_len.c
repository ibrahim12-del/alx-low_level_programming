#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the number of elements in a line returns
 * @h: pointer to the list_t list
 *
 * Return: elements number of h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;

	}

	return (count);

}
