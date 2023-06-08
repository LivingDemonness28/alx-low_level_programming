#include "main.h"

/**
 * get_bit - returns the value of a bit at
 * an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitMask;

if (index >= sizeof(*n) * 8)
{
return (-1);
}

bitMask = 1UL << index;
*n |= bitMask;
return (1);
}
