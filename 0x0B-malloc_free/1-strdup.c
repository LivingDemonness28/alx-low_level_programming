#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: pointer to the duplicated string,
 * or NULL if insufficient memory
 */
char *_strdup(char *str)
{
char *dup;
int length = 0;
int i;

if (str == NULL)
{
return (NULL);
}

dup = malloc(sizeof(char) * (length + 1));

if (dup == NULL)
{
return (NULL);
}
return (dup);
}
