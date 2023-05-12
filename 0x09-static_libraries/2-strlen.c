#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int i = 0;

if (*s)
{
i++;
i += _strlen(s + 1);
}
return (i);
}
