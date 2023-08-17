#include "lists.h"

/**
 * add_dnodeint - add new node to beginning of dlistint list.
 * @head: ptr to head of dlistint_t list.
 * @n: int for new node to contain.
 * Return: address of new node (Success)
*/
dlistint_t add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nn = malloc(sizeof(dlistint_t));

if (!nn)
return (NULL);

nn->n = n;
nn->prev = NULL;
nn->next = *head;

if (*head)
(*head)->prev = nn;

*head = nn;
return (nn);
}
