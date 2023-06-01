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
size_t count = 0;

printf("[");
while (h != NULL)
{
if (h->str != NULL)
{
printf("%s", h->str);
}
else
{
printf("(nil)");
}

count++;
h = h->next;

if (h != NULL)
{
printf(", ");
}
}
printf("]\n");

return (count);
}
