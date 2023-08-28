#include "lists.h"

/**
 *add_nodeint - add node.
 *@head: struct.
 *@n: string.
 *Return: ..
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
