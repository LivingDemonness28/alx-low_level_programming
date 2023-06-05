#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the
 * end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node,
 * or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nn = malloc(sizeof(listint_t));
listint_t *current = *head;

if (nn == NULL)
{
return (NULL);
}

nn->n = n;
nn->next = NULL;

if (*head == NULL)
{
*head = nn;
return (nn);
}

while (current->next != NULL)
{
current = current->next;
}
current->next = nn;

return (nn);
}
