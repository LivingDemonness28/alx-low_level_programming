#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t linked list.
 * @head: head of list.
 * Return: Nothing.
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;

for (; head; current = head->next)
{
free(head);
head = current;
}
}
