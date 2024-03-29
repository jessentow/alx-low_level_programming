#include "lists.h"

/**
 * sum_dlistint -This sums all the data of a dlistint_t list.
 * @head: Represent the head of the dlistint_t list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
	add += head->n;
	head = head->next;
	}

	return (add);
}

