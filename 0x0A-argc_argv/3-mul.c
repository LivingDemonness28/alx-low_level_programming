#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @str: The string to convert
 * Return: The converted integer
 */
int _atoi(const char *str)
{
int res = 0;
int sign = 1;
int i = 0;

while (str[i] == ' ')
i++;

if (str[i] == '-')
{
sign = -1;
i++;
}
else if (str[i] == '+')
{
i++;
}

while (str[i] >= '0' && str[i] <= '9')
{
res = res * 10 + (str[i] - '0');
i++;
}

return (res * sign);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int num1, num2, prod;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
prod = num1 * num2;
printf("%d\n", prod);
return (0);
}
