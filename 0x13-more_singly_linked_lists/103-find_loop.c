#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head);
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