#include "lists.h"
#include <stddef.h>

/**
 * list_len - Calculate the length of the linked list
 * @h: Pointer to the head of the list
 * Return: Number of elements in the list
*/
size_t list_len(const Node *h) {
size_t count;

count = 0;

while(h != NULL)
{
count++;
h = h->next;
}

return (count);
}
