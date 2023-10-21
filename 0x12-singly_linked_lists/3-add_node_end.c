#include <string.h>
#include "lists.h"

/**
 * add_node_end - This will add a new node at the end of
 * a singly linked list.
 * @head: This shows a linked list to print
 * @str: this is a need to be duplicated.
 *
 * Return: This will return the address of the new element,
 * or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp_node; /* Create a new node */
	unsigned int a = 0;

	if (str == NULL)
	return (NULL);

	while (str[a++])
	;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = --a;
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
