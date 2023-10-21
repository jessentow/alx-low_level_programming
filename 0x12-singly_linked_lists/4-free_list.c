#include <string.h>
#include "lists.h"

/**
 * free_list - this will free a singly linked list.
 * @head: This is a linked list to print
 *
 * Return: This will return void.
 */

void free_list(list_t *head)
{
	list_t *tmp_node; /* Create a temporary node */

	while (head)
	{
	tmp_node = head;
	head = head->next;
	free(tmp_node->str);
	free(tmp_node);
	}
}
