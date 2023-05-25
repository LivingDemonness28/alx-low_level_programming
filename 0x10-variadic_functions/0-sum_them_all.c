#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: The sum of all parameters. If @n is 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int num, sum = 0;

if (n == 0)
return 0;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
num = va_arg(args, int);
sum += num;
}
va_end(args);
return (sum);
}
