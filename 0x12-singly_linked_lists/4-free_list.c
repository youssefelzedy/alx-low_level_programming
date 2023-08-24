#include "lists.h"

/**
 *free_list - frees a list_t list.
 *@head: struct.
 *Return: ..
 */

void free_list(list_t *head)
{
	list_t *nxt_node;

	while (head != NULL)
	{
		nxt_node = head->next;
		free(head->str);
		free(head);
		head = nxt_node;

	}
}


