#include "lists.h"

/**
 * dlistint_len - counts elements in a dlistint list.
 * @h: head.
 * Return: num of elements in list.
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;

for (; h; n++)
{
h = h->next;
}
return (n);
}
