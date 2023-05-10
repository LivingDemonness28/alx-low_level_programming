#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt1(n, 0));
}

/**
 * _sqrt1 - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @a: iterator
 * Return: the resulting square root
 */

int _sqrt1(int n, int a)
{
if (a * a > n)
{
return (-1);
}
if (a * a == n)
{
return (a);
}
return (_sqrt1(n, a + 1));
}
