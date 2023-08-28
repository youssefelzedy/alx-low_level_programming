#include "lists.h"

/**
 *listint_len - prints all the elements of a list_t list.
 *@h: struct.
 *Return: ..
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
