#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int x, y, z;

for (z = 0;  z < size; z++)
{
x = x + a[z * size + z];
}
for (z = size - 1;  z >= 0; z--)
{
y += a[z * size + (size - z - 1)];
}
printf("%d, %d\n", x, y);
}
