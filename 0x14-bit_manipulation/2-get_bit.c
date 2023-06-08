#include "main.h"

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
