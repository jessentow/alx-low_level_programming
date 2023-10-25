#include "lists.h"
#include <stdio.h>
#include "lists.h"

/**
 * check_looped_listint - check if there is loop in a linked list and
 *            counts the number of unique nodes in a looped linked list
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 - if the list is not looped,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t check_looped_listint(const listint_t *head)
{
	const listint_t *grace, *zoe;
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
	return (nodes);																				}

	return (0);
}

/**
 * print_listint_safe - This prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return:This will return the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = check_looped_listint(head);

	if (nodes == 0)
	{
	while (head != NULL)
	{
	nodes++;
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	for (index = 0; index < nodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

