#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - This will free the singly linked list.
 * @head: The linked list tthat will be printed
 *
 * Return: This will return void.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp_node;

	if (head == NULL)
	return;

	while (*head)
	{
	tmp_node = (*head)->next;
	free(*head);
	(*head) = tmp_node;
	}
}
