#include "lists.h"

/**
 *add_node_end - add node.
 *@head: struct.
 *@str: string.
 *Return: ..
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t)), *last = *head;
	char *sstr;

	if (newNode == NULL)
		return (NULL);

	sstr = strdup(str);
	if (sstr == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = sstr;
	newNode->len = strlen(str);
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

