
/**
 * get_bit - returns the value of a bit
 * at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
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
