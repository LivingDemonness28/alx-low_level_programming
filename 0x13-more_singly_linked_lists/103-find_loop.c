#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop
 * in a linked list
 * @head: linked list to search for
 * Return: address of the node where
 * the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *unrushed = head;
listint_t *rushed = head;

if (head == NULL)
return (NULL);

while (rushed != NULL && rushed != NULL && rushed->next != NULL)
{
unrushed = unrushed->next;
rushed = rushed->next->next;

if (rushed == unrushed)
{
unrushed = rushed;
while (unrushed != rushed)
{
unrushed = unrushed->next;
rushed = rushed->next;
}
return (unrushed);
}
}
return (NULL);
}
