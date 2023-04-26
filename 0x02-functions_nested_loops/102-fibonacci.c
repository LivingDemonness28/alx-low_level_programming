#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers
 * Return: always 0
*/
int main(void)
{
unsigned long count i = 0, j = 1, sum;
for (count = 0; count < 50; count++)
{
sum = i + j;
i = j;
j = sum;
printf("%lu", sum);
if (count == 49)
{
_putchar('\n')
}
else
{
printf(", ");
}
}
return (0);
}
