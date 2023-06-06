#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * unique_listint_node_count - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
*/
size_t unique_listint_node_count(const listint_t *head)
{
const listint_t *slow, *fast;
size_t apex = 1;

if (head == NULL || head->next == NULL)
{
return (0);
}

slow = head->next;
fast = (head->next)->next;

while (fast != NULL)
{
if (slow == fast)
{
slow = head;
while (slow != fast)
{
apex++;
slow = slow->next;
fast = fast->next;
}

slow = slow->next;
while (slow != fast)
{
apex++;
slow = slow->next;
}
return (apex);
}
slow = slow->next;
fast = (fast->next)->next;
}
return (0);
}

/**
 * print_listint_safe - Prints a
 * listint_t list safely.
 * @head: A pointer to the head
 * of the listint_t list.
 * Return: The number of nodes
 * in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t apex, i;

apex = unique_listint_node_count(head);

if (apex == 0)
{
for (apex = 0; head != NULL; apex++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (i = 0; i < apex; i++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (apex);
}
