#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - concatenates all the arguments of your program
 *@str: string
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
int i, w, j, k, count, m, wordf;
char **arr1;
char *x;

w = 0;
j = 0;
i = 0;
count = 0;
if (*str == '\0' || str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] == '\0'))
w++;
}
arr1 = (char **)malloc((w + 1) * sizeof(char *));
if (arr1 == NULL)
return (NULL);
for (wordf = 0; str[wordf] && j <= w; wordf++)
{
count = 0;
if (str[wordf] != ' ')
{
for (i = wordf ; str[i] != '\0'; i++)
{
if (str[i] == ' ')
break;
count++;
}
*(arr1 + j) = (char *)malloc((count + 1) * sizeof(char));
if (*(arr1 + j) == NULL)
{
for (k = 0; k <= j; k++)
{
x = arr1[k];
free(x);
}
free(arr1);
return (NULL);
}
for (m = 0; wordf < i; wordf++)
{
arr1[j][m] = str[wordf];
m++;
}
arr1[j][m] = '\0';
j++;
}
}
arr1[j] = NULL;
return (arr1);
}
