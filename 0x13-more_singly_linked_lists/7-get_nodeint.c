#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - This will find the nth node
 * of a listint_t linked list.
 * @head:This is a linked list to print
 * @index: This is the index of the node, starting at 0.
 *
 * Return: This will retutne the nth node, NULL otherwise.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
	return (NULL);

	for (a = 0; a < index; a++)
	{
	head = head->next;
	if (head == NULL)
	return (NULL);
	}
	return (head);
}
