#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary
 * equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int bit, mask;
int one = 0, i;

if (n == 0)
{
_putchar('0');
return;
}

for (i = sizeof(n) * 8 - 1; i >= 0; i--)
{
bit = 1UL << i;
if (n & bit)
{
_putchar('1');
one = 1;
}
else if (one)
(
_putchar('0');
)
}
}
