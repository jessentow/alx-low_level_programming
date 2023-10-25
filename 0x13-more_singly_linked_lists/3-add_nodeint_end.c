#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - This will  add a new node at the
 * end of a singly linked list.
 * @head: a linked list to print
 * @n:This is the  value to be added.
 *
 * Return:this will return the address of the
 * new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	(*head) = new_node;
	return (new_node);
	}

	tmp_node = *head;
	while (tmp_node->next)
	tmp_node = tmp_node->next;

	tmp_node->next = new_node;

	return (new_node);
}
