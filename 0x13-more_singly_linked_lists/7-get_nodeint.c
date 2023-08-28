#include "lists.h"

/**
 *get_nodeint_at_index - prints all the elements of a list_t list.
 *@head: struct.
 *@index: ...
 *Return: ...
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (n <= index && head != NULL)
	{
		if (n == index)
			return (head);
		n++;
		head = head->next;
	}
	return (NULL);
}
