#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * delete_nodeint_at_index - This functions deletes the
 * nth node of a linked list.
 * @head: Thsi si the linked list to print
 * @index: index of the node to be deleted. Index starts at 0.
 *
 * Return: The return the nth node, NULL otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *curr_node, *next_node;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	next_node = (*head)->next;
	free(*head);
	*head = next_node;
	return (1);
	}

	curr_node = *head;
	for (a = 0; a < index - 1; a++)
	{
	if (curr_node->next == NULL)
	return (-1);
	curr_node = curr_node->next;
	}

	next_node = curr_node->next;
	curr_node->next = next_node->next;
	free(next_node);

	return (1);
}
