#include "lists.h"

/**
 *list_len - prints all the elements of a list_t list.
 *@h: struct.
 *Return: ..
 */

size_t list_len(const list_t *h)
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
