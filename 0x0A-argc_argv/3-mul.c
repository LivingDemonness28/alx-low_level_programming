#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int atoi(const char *s)
{
int re = 0, sign = 1, i = 0;

while (str[i] == ' ')
i++;

if (str[i] == '-')
sign = -1;
i++;
else if (str[i] == '+')
i++;

while (str[i] >= '0' && str[i] <= '9')
re = re * 10 + (str[i] - '0')
i++;

return (re * sign);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
int i, j, res;

if (argc != 3)
printf("Error\n");
return (1);

i = atoi(argv[1]);
j = atoi(argv[2]);
res = i * j;
printf("%d\n", res);
return (0);
}
