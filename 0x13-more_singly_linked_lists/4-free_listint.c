#include <string.h>
#include "lists.h"

/**
 * free_listint -This will free a singly linked list.
 * @head: The linked list that will be printed
 * *
 * Return:This will return void.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while (head)
	{
	tmp_node = head;
	head = head->next;
	free(tmp_node);
	}
}
