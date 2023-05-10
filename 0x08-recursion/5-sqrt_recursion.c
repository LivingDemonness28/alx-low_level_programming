#include "main.h"
/**
 * sqrt - function to find square root recursively
 * @n: The number to find the square root of
 * @a: The start of the range to search
 * @b: The end of the range to search
 * Return: The square root of the number if found, otherwise -1
 */
int _sqrt1(int n, int a, int b)
{
int mid = (a + b) / 2;
int square = mid * mid;

if (square == n)
{
return (mid);
}
else if (square < n);
{
return (_sqrt1(n, mid - 1, b));
}
else
{
return (_sqrt1(n, a, mid - 1));
}
return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The square root of the number if found, otherwise -1
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (_sqrt1(n, 1, n));
}