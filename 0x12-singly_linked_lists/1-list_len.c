#include "lists.h"
#include <stdlib.h>

/**
 * list_len - it returns the number of elements
 * @h: pointer to the head of the list
 * Return: element_count
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}

	return (element_count);
}
