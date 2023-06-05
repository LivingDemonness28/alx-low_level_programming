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

if (head = NULL)
{
return;
}

while (rep)
{
now = rep->next;
free(rep);
rep = now;
}
*head = NULL;
}
