#include "lists.h"

/**
 *free_listint - frees a list_t list.
 *@head: struct.
 *Return: ..
 */

void free_listint(listint_t *head)
{
	listint_t *nxt_node;

	while (head != NULL)
	{
		nxt_node = head->next;
		free(head);
		head = nxt_node;

	}
}

