#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the
 * beginning of a listint_t list
 * @head: A pointer to the pointer
 * to the head of the list
 * @n: The value to be stored in the new node
 * Return: The address of the new element,
 * or NULL if it failled
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nn = malloc(sizeof(listint_t));

if (nn == NULL)
{
return (nn);
}

nn->n = n;
nn->next = *head;
*head = nn;
return (nn);
}
