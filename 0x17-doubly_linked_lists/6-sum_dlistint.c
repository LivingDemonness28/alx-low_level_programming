#include "lists.h"

/**
 * sum_dlistint - sum all elements of dlistint_t list.
 * @head: head of list.
 * Return: sum of list.
*/
int sum_dlistint(dlistint_t *head)
{
int total = 0;

for (; head; head = head->next)
{
total += head->n;
}
return (total);
}
