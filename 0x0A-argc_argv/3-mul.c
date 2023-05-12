#include "main.h"

/**
 * str_to_integer - Converts a string to an integer
 * @str: The string to convert
 * Return: The converted integer
 */
int str_to_integer(char *str)
{
int sign = 1;
int result = 0;
int i = 0;

if (str == NULL)
return (0);

if (str[0] == '-')
{
sign = -1;
i++;
}

for (; str[i] != '\0'; i++)
{
if (str[i] >= '0' && str[i] <= '9')
result = result * 10 + (str[i] - '0');
else
break;
}

return (sign * result);
}

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = str_to_integer(argv[1]);
num2 = str_to_integer(argv[2]);
result = num1 * num2;

printf("%d\n", result);
return (0);
}
