#include "lists.h"

/**
 * check_looped_listfree - This checks if there is loop in a linked list and
 *            counts the number of unique nodes in a looped linked list
 * @head: This is a pointer to the head of
 * the listint_t to check.
 *
 * Return: 0 - if the list is not looped,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t check_looped_listfree(listint_t *head)
{
	listint_t *grace, *zoe;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	grace = head->next;
	zoe = (head->next)->next;

	while (zoe)
	{
	if (grace == zoe)
	break;
	grace = grace->next;
	zoe = (zoe->next)->next;
	}

	if (grace == zoe)
	{
	grace = head;
	while (grace != zoe)
	{
	nodes++;

	grace = grace->next;
																zoe = zoe->next;
	}
	grace = grace->next;
	while (grace != zoe)
	{
	nodes++;
	grace = grace->next;
	}
	return (nodes);
	}
	return (0);
}

/**
 * free_listint_safe - This will free a listint_t list safely
 *            (i.e. can free lists containing loops)
 * @h: This is a pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: This returns the size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, first;

	nodes = check_looped_listfree(*h);
	if (nodes == 0)
	{
	while (h != NULL && *h != NULL)
	{
	nodes++;
	tmp = (*h)->next;
	free(*h);
																*h = tmp;
																}
	}
	else
	{
	for (first = 0; first < nodes; first++)
	{
	tmp = (*h)->next;
	free(*h);
	*h = tmp;
	}
	*h = NULL;
	}
	h = NULL;
	return (nodes);
}
