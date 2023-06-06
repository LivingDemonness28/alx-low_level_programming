#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a
 * listint_t linked list.
 * @h: A pointer to the head of
 * the listint_t list.
 * Return: The size of the list
 * that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *now, *next;
size_t i = 0;

if (h == NULL || *h == NULL)
{
return (0);
}

now = *h;

while (now != NULL)
{
next = now->next;
free(now);
i++;
if (next >= now)
{
break;
}
now = next;
}

*h = NULL;

return (i);
}
