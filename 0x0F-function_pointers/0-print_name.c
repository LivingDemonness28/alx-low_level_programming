#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function pointer.
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

while (*name != '\0')
{
f(*name);
name++;
}
}

/**
 * print_char - prints a character using putchar.
 * @c: input character.
 * Return: no return.
 */
void print_char(char *c)
{
putchar(*c);
}
