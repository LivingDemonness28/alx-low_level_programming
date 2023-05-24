#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Calls the provided function to print the name.
 * @name: The name to be printed.
 * @f: Pointer to the function responsible for printing the name.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}

/**
 * print_name_function - Prints the name character by character.
 * @name: The name to be printed.
 */
void print_name_function(char *name)
{
char *cc = name;
while (*cc != '\0')
{
putchar(*cc);
cc++;
}
putchar('\n');
fflush(stdout);
}

/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
char *name = "John Doe";

print_name(name, print_name_function);
return (0);
}
