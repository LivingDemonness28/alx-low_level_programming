#include "main.h"

/**
 * clear_bit - sets the value of a
 * given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitMask;

if (index >= sizeof(*n) * 8)
{
return (-1);
}

bitMask = ~(1UL << index);
*n &= bitMask;
return (1);
}
