#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given index.
 * @h: head of list.
 * @idx: index.
 * @n: int for the new node.
 * Return: Address of new node (Success), NULL (Otherwise).
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current = *h, *nn = malloc(sizeof(dlistint_t));

if (idx == 0)
return (add_dnodeint(h, n));

while (idx != 1)
{
current = current->next;
if (!current)
return (NULL);
idx--;
}

if (!(current->next))
return (add_dnodeint_end(h, n));

if (!nn)
return (NULL);

nn->n = n;
nn->prev = current;
nn->next = current->next;
current->next->prev = nn;
current->next = nn;
return (nn);
}
