#include "lists.h"

/**
 *add_node - add node.
 *@head: struct.
 *@str: string.
 *Return: ..
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *) malloc(sizeof(list_t));

	if (head == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str  == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
