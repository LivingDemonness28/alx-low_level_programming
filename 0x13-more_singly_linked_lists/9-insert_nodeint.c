#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * in a linked list, at a given position
 * @head: pointer to the first node in
 * the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nn = malloc(sizeof(listint_t)), *now = *head;
unsigned int i;

if (head == NULL || nn == NULL)
return (NULL);

if (idx == 0)
{
nn->next = *head;
*head = nn;
return (nn);
}

for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
nn->next = now->next;
now->next = nn;
return (nn);
}
else
now = now->next;
}
return (NULL);
}
