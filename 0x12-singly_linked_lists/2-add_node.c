#include "lists.h"

/**
 *add_node - add node.
 *@head: struct.
 *@str: string.
 *Return: ..
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t) malloc(sizeof(list_t));

	if (head == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
