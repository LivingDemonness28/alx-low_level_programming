#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size.
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, digit1, digit2, sum, carry = 0;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

if (size_r <= len1 + 1 || size_r <= len2 + 1)
return (NULL);

r[len1 + 1] = '\0'; 

len1--, len2--, size_r--;

while (size_r >= 0) {
digit1 = (len1 >= 0) ? n1[len1] - '0' : 0;
digit2 = (len2 >= 0) ? n2[len2] - '0' : 0;

sum = digit1 + digit2 + carry;
carry = sum / 10;

r[size_r] = (sum % 10) + '0';

if (len1 > 0)
len1--;
if (len2 > 0)
len2--;

size_r--;
}

if (*r == '0')
return (r + 1);
else
return (r);
}
