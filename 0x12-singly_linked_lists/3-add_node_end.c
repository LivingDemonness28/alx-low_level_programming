#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new_node at the end
 * of list_t list
 * @head: head of linked list
 * @str: stored string
 * Return: head address
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *nn = malloc(sizeof(list_t));

if (head == NULL || str == NULL)
return (NULL);

if (nn == NULL)
return (NULL);

nn->str = strdup(str);
if (nn->str == NULL)
{
free(nn);
return (NULL);
}

nn->len = strlen(str);
nn->next = NULL;

if (*head == NULL)
{
*head = nn;
}
else
{
while ((*head)->next)
head = (*head)->next;
(*head)->next = nn;
}

return (nn);
}
