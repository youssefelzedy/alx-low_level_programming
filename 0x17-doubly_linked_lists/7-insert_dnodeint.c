#include "lists.h"

/**
 * insert_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @h: pointer to head of list
 * @idx: index of node to return
 * @n: value to insert
 * Return: nth node of list, or NULL if node does not exist
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *node = *h;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	node = get_dnodeint_at_index(*h, idx - 1);
	if (node == NULL)
		return (NULL);
	new_node->next = node->next;
	new_node->prev = node;
	node->next = new_node;
	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;
	return (new_node);
}
