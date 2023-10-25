#include "lists.h"

/*
 * find_listint_loop - This will  find the loop
 * in a linked list
 * @head: THis is the linked list to search for
 *
 * Return: This will returnaddress of the node
 * where the loop starts, or NULL
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
