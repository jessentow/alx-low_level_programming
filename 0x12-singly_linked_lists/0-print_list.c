#include <stdio.h>
#include "lists.h"

/*
 * print_list -this will print all the elements of a list.
 * @h: This becomes the linked list to print
 *
 * Description: This function prints all the elements of a linked list.
 *              If the string within a node is NULL, it prints "[0] (nil)"
 *
 *
 * Return: This will return the number of nodes (size_t)
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
