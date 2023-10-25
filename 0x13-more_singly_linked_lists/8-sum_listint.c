#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * sum_listint - This will sum all the data in a linked list.
 * @head: This is the linked list that will be printed
 *
 * Return: This will retun 0, NULL otherwise.
 *
 * Description - This is the function that returns the sum
 * of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
	return (0);

	while (head)
	{
	add += head->n;
	head = head->next;
	}
	return (add);
}
