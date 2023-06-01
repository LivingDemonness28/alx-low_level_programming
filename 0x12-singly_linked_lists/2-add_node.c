#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_note - Adds a new node at the beginning
 * of a list_t list
 * @head: Pointer to the pointer to the
 * head of the list
 * @str: String to be duplicated and
 * stored in the new node
 * Return: The address of the new element,
 * or NULL if it failedas
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *nn;

nn = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

nn->str = strdup(str);
nn->len = strlen(str);
nn->next = *head;
*head = nn;

return (*head);
}
