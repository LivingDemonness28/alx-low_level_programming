#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *now = *head;
listint_t *after = NULL;

while (now != NULL)
{
after = now->next;
now->next = prev;
prev = now;
now = after;
}
*head = prev;
return (*head);
}
