#include "lists.h"

/**
 * add_dnodeint_end - add new node to end of dlistint_t list.
 * @head: ptr to head of dlistint_t list.
 * @n: int for new node to contain.
 * Return: address of new node (Success)
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nn = malloc(sizeof(dlistint_t)), *end;

if (!nn)
return (NULL);

nn->n = n;
nn->next = NULL;

if (!(*head))
{
nn->prev = NULL;
*head = nn;
return (nn);
}

for (end = *head; end->next; end = end->next)
{
}
end->next = nn;
nn->prev = end;
return (nn);
}
