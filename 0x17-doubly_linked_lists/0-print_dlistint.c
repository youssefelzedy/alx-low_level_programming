#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *node = (dlistint_t *)h;
	int n = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		n++;
	}
	return (n);
}
