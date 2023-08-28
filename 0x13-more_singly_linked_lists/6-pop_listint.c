#include "lists.h"

/**
 *pop_listint - frees a list_t list.
 *@head: struct.
 *Return: ..
 */

int pop_listint(listint_t **head)
{
	int nxt_node;
	listint_t *temp;

	if (head == NULL)
		return (0);
	if (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		nxt_node = temp->n;
		free(temp);
	}
	else
	{
		return (0);
	}

	return (nxt_node);
}

