#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Calculate the length of the linked list
 * @h: Pointer to the head of the list
 * Return: Number of elements in the list
*/
size_t list_len(const list_t *h)
{
size_t counts;

counts = 0;
while (h != NULL)
{
counts++;
h = h->next;
}
return (counts);
}
