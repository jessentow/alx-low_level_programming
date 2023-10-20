#include <stdio.h>
#include "lists.h"

/*
 * print_list - Print all the elements of a list_t list.s
 * @h: This becomes the linked list to print
 * Return: This will return the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);

	++counter;
	h = h->next;
	}

	return (counter);
}
