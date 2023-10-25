#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * pop_listint - This will add a new node to the
 * beginning of a singly linked list.
 * @head: This is the  linked list that will be printed
 *
 * Return: This will witll return the address of the new element,
 * or NULL if it failed.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp_nod;
	int appear = 0;

	if (*head == NULL)
	return (0);

	tmp_nod = *head;
	*head = tmp_nod->next;
	appear = tmp_nod->n;
	free(tmp_nod);

	return (appear);
}
