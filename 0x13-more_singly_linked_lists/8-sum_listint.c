#include "lists.h"

/**
 *sum_listint - prints all the elements of a list_t list.
 *@head: struct.
 *Return: ..
 */

int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
