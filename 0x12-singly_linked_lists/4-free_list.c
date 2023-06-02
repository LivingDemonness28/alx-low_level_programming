#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */

void free_list(list_t *head)
{
while (head)
{
head = head->next;
free(head->str);
free(head);
}
}
