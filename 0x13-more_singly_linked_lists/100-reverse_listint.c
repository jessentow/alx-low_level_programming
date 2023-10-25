#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - This will reverse a linked list
 * @head: The pointer to the first node in the linked list
 *
 * Return: Returns pointer to the 1st node in the new list, fail otherwise
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_list_head = NULL;
	listint_t *reverse_list_head = NULL;

	while (*head)
	{
	current_list_head = (*head)->next;
	(*head)->next = reverse_list_head;
	reverse_list_head = *head;
	*head = current_list_head;
	}

	*head = reverse_list_head;

	return (*head);
}
