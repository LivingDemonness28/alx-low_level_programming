#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - Prints all elements of a linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
count++;
}
return (count);
}
