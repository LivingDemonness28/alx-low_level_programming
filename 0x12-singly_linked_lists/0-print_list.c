#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list - Prints all elements of a linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0, len;

_putchar('[');
while (h != NULL)
{
if (h->str != NULL)
{
len = strlen(h->str);
for (size_t i = 0; i < len; i++)
{
_putchar(h->str[i]);
}
}
else
{
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
}

count++;
h = h->next;

if (h != NULL)
{
_putchar(',');
_putchar(' ');
}
}
_putchar(']');
_putchar('\n');

return (count);
}
