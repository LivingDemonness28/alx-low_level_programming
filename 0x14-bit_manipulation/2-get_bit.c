#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 for success, -1 for failure
 */
int get_bit(unsigned int long n, unsigned int index)
{
unsigned long int bitMask, res;

bitMask = 1UL << index;
res = n & bitMask;

if (index >= sizeof(n) * 8)
{
return (-1);
}

if (res != 0)
{
return (1);
}
else
{
return (0);
}
}
