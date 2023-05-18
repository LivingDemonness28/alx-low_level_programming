#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr in bytes
 * @new_size: new size of the memory block in bytes
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *np;
unsigned int min_size;

if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
np = malloc(new_size)

if (np != NULL)
{
min_size = (old_size < new_size) ? old_size : new_size;
memcpy(new_ptr, min_size);
free(ptr);
}
return (np);
}
