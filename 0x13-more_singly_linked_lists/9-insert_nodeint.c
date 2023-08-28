#include "lists.h"

/**
 *insert_nodeint_at_index - prints all the elements of a list_t list.
 *@head: struct.
 *@idx: ...
 *@n: ...
 *Return: ...
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nm = 0;
	listint_t *newNode = malloc(sizeof(listint_t)), *temp = *head;

	if (head == NULL || newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else
	{
		while (nm <= idx && temp != NULL)
		{
			if (nm == idx - 1)
			{
				newNode->next = temp->next;
				temp->next = newNode;
				return (newNode);
			}
			nm++;
			temp = temp->next;
		}
	}

	return (NULL);
}
