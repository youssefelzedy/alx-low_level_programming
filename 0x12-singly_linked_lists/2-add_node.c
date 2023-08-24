#include "lists.h"

/**
 *add_node - add node.
 *@head: struct.
 *@str: string.
 *Return: ..
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	char *sstr;

	if (head == NULL)
		return (NULL);

	sstr = strdup(str);
	if (sstr == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = sstr;
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
