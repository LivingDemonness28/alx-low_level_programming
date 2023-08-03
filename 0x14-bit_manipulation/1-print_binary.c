#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary
 * equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int bit;
int one = 0, i = sizeof(n) * 8 - 1;

if (n == 0)
{
putchar('0');
return;
}

while (i >= 0)
{
bit = 1UL << i;
if (n & bit)
{
putchar('1');
one = 1;
}
else if (one)
{
putchar('0');
}
i--;
}
}
