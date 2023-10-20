#include "lists.h"

/**
 * list_len -  This will count the elements of a linked list.
 * @h: a singly linked list
 *
 * Return: the number of nodes (size_t)
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	++counter;
	h = h->next;
	}

	return (counter);
}
