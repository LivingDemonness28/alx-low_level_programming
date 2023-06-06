#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t
 * linked list
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *now = head;
size_t count = 0;

while (now != NULL)
{
printf("[%p] %d\n", (void *)now, now->n);

if (now <= now->next)
{
printf("-> [%p] %d\n", (void *)now->next, now->next->n);
exit(98);
}
now = now->next;
count++;
}
return (count);
}
