#include "lists.h"

/**
 *free_listint2 - frees a list_t list.
 *@head: struct.
 *Return: ..
 */

void free_listint2(listint_t **head)
{
	listint_t *nxt_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		nxt_node = (*head)->next;
		free(*head);
		*head = nxt_node;

	}
}

