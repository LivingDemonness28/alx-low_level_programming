#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_note - Adds a new node at the beginning
 * @head: head of list
 * @str: stored string
 * Return: head address
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *nn;
unsigned int len = 0;

if (str)
len = strlen(str);

nn = malloc(sizeof(list_t));
if (nn == NULL)
return (NULL);

nn->str = strdup(str);
if (nn->str == NULL)
{
free(nn);
return (NULL);
}

nn->len = len;
nn->next = *head;
*head = nn;

return (*head);
}
