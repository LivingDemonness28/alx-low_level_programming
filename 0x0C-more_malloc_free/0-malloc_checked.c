#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer to the allocated memory
 * If malloc fails, the program terminates with
 * a status value of 98
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
