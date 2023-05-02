#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - it prints all the lelements of a list_t list
 * @h: pointer to the head of the list
 * Return: i (the counter)
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);

		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		i++;
	}
	return (i);
}
