#include "lists.h"

/*
 * @head: THis is the linked list to search for
 *
 * find_listint_loop - This function finds the loop
 *                    in a linked list
 * Return: This will return address of the node
 * where the loop starts, or NULL
 *
 * Description: This is the function that finds a
 * loop in a linked list.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
	return (NULL);

	while (slow && fast && fast->next)
	{
	slow = slow->next;
	fast = fast->next->next;

	if (fast == slow)
	{
	slow = head;
	while (slow != fast)
	{
	slow = slow->next;
	fast = fast->next;
	}
	return (fast);
	}
	}

	return (NULL);
}
