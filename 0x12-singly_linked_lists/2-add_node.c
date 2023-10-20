#include <string.h>
#include "lists.h"

/**
 * add_node - This will add a new node at the beginning of
 *            a singly linked list.
 * @head:This is a linked list to print
 * @str:  This needs to be repeated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int c = 0;

	while
	(str[c++]);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = --c;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
