#include "lists.h"

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
