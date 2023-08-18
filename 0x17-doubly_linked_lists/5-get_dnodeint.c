#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node in
 * a dlistint_t list.
 * @head: head of list.
 * @index: node idx.
 * Return: address of node (Success), NULL (Otherwise).
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
while (index != 0)
{
if (!head)
return (NULL);

head = head->next;
index--;
}
return (head);
}
