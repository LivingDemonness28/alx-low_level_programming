#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *now = *head, *prev = NULL;
unsigned int i = 0;

while (now && i < index)
{
prev = now;
now = now->next;
i++;
}

if (now == NULL)
return (-1);

if (prev == NULL)
{
*head = now->next;
}
else
{
prev->next = now->next;
}
free(now);
return (-1);
}