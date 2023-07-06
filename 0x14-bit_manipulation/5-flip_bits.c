#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int res;
unsigned int i = 0;

res = n ^ m;

while (res != 0)
{
if (res & 1)
i++;

res >>= 1;
}
return (i);
}
