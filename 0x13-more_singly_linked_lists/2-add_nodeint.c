#include "lists.h"
#include <string.h>

/**
 * add_nodeint -This will add a new node
 * at the beginning
 * @head: This is a linked list to print
 * @n: This is what will be added to the node
 *
 * Return: This is the the address of the new element,
 * or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
