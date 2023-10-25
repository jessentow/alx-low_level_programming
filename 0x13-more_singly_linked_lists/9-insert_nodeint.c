#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
* insert_nodeint_at_index - This will insert new node at the
* nth node of a linked list.
* @head: This is the linked list to be printed
* @idx: the position where new node will be added.
* @n: The value to be added.
*
* Return:this will return the nth node, NULL otherwise.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_nod, *tmp_nod;

	if (head == NULL && idx != 0)
	return (NULL);

	new_nod = malloc(sizeof(listint_t));
	if (new_nod == NULL)
	return (NULL);

	new_nod->n = n;
	if (idx == 0)
	{
	new_nod->next = *head;
	*head = new_nod;
	return (new_nod);
	}

	tmp_nod = *head;
	for (a = 0; a < idx - 1; a++)
	{
	tmp_nod = tmp_nod->next;
	if (tmp_nod == NULL)
	return (NULL);
	}

	new_nod->next = tmp_nod->next;
	tmp_nod->next = new_nod;

	return (new_nod);
}
