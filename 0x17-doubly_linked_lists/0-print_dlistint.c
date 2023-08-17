#include "lists.h"

/**
 * print_dlistint - prints all elements ofdlistint list.
 * @h: head.
 * Return: Number of nodes in list.
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t n = 0;

for (; h; n++)
{
printf("%d\n", h->n);
h = h->next;
}
return (n)
}
