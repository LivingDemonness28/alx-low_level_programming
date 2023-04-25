#include "main.h"
/**
 * print_times_table - prints the times table for n
 * @n: The multiplication table
 * Return: Nothing
*/
void print_times_table(int n)
{
int i, j, times;
if (!(n > 15 || n < 0))
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
times = (i * j);
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (times < 10 && j != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((times % 10) + '0');
}
else if (times >= 10 && times < 100)
{
_putchar(' ');
_putchar((times / 10) + '0');
_putchar((times % 10) + '0');
}
else if (times >= 100 && j != 0)
{
_putchar((times / 100) + '0');
_putchar((times / 10) % 10 + '0');
_putchar((times % 10) + '0');
}
else
{
_putchar((times % 10) + '0');
}
}
_putchar('\n');
}
}
}
