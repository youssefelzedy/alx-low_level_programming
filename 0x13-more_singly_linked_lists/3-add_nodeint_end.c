#include "lists.h"

/**
 *add_nodeint_end - add node.
 *@head: struct.
 *@n: int.
 *Return: ..
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t)), *last = *head;

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (last == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = newNode;
	return (newNode);
}
