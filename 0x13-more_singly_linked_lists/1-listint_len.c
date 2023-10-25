#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * listint_len - This will print all the
 * elements of a linked list.
 * @h: This is  a linked lis that will be printed
 *
 * Return:This will return the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	++counter;
	h = h->next;
	}

	return (counter);
}
