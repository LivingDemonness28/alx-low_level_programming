#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer to the newly created array
 *if min > max or if malloc fails, returns NULL
 */
int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min++;

return (arr);
}
