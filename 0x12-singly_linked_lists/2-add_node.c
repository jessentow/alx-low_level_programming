#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>


/**
 * add_node - This will add a new node at the beginning of
 *            a singly linked list.
 * @head:This is a linked list to print
 * @str:  This needs to be repeated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str);
{
	list_t *new;
	unsigned int a = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
