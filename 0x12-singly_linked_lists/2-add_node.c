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

nn = malloc(sizeof(list_t));
if (!nn)
return (NULL);

nn->str = strdup(str);
nn->len = strlen(str);
nn->next = *head;
*head = nn;

return (*head);
}
