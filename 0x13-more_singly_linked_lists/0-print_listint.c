#include "lists.h"

/**
 *print_listint - prints all the elements of a list_t list.
 *@h: struct.
 *Return: ..
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
