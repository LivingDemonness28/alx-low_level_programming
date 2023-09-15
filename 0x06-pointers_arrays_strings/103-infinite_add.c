#include "main.h"

/**
 * rev_string - reverse the characters in that array.
 * @n: The characters to reverse.
 * Return: Nothing.
*/
void rev_string(char *n)
{
int a = 0, b = 0;
char now;

for (; *(n + 1) != '\0'; a++);
a--;

for(; b < a; b++, a--)
{
now = *(n + b);
*(n + b) = *(n + a);
*(n + a) = now;
}
}

/**
 * infinite_add - add two nums together.
 * @n1: string representation of first number
 * @n2: string representation of second number
 * @r: ptr to buffer
 * @size_r: buffer size
 * Return: Ptr to function
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0, a = 0, b = 0, digs = 0;
int digit1 = 0, digit2 = 0, total = 0;

for (; *(n1 + a) != '\0'; a++);
for (; *(n2 + b) != '\0'; b++);
a--;
b--;

if (b >= size_r || a >= size_r)
return (0);
for (; b >= 0 || a >= 0 || carry == 1;)
{
if (a < 0)
digit1 = 0;
else
digit1 = *(n1 + a) - '0';
if (b < 0)
digit2 = 0;
else
digit2 = *(n2 + b) - '0';
total = digit1 + digit2 + carry;
if (total >= 10)
carry = 1;
else
carry = 0;
if (digs >= (size_r - 1))
return (0);
*(r + digs) = (total % 10) + '0';
digs++;
b--;
a--;
}
if (digs == size_r)
return (0);
*(r + digs) = '\0';
rev_string(r);
return (r);
}
