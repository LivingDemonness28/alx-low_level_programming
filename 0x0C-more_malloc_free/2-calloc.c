#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory
 *if nmemb or size is 0, returns NULL
 *if malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int ts;

if (nmemb == 0 || size == 0)
return (NULL);

ts = nmemb * size;
ptr = malloc(ts);

if (ptr == NULL)
return (NULL);

memset(ptr, 0, ts);
return (ptr);
}
