#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (_check1(s, 0, _strlen1(s)));
}

/**
 * _strlen1 - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen1(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen1(s + 1));
}

/**
 * _check1 - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int _check1(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (_check1(s, i + 1, len - 1));
}
