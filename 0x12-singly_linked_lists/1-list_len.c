#include "lists.h"

/**
 * list_len - Calculate the length of the linked list
 * @h: Pointer to the head of the list
 * Return: Number of elements in the list
*/
size_t list_len(const Node *h) {
if (h == NULL)
{
return (0);
}
else
{
return (1 + list_len(h->next));
}
}
