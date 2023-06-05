#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *now;
listint_t *rep = *head;

if (!head)
{
return;
}

while (rep)
{
now = rep;
rep = rep->next;
free(now);
}
*head = NULL;
}
