#include "main.h"

/**
 * cw - count num of words in a string.
 * @str: string.
 * Return: word count.
*/
int cw(char *str)
{
int a = 0, b = 0, c = 0;

while (str[b] != '\0')
{
if (str[b] == ' ')
a = 0;
else if (a == 0)
{
a = 1;
c++;
}
b++;
}
return (c);
}

/**
 * strtow - concatenates all the arguments of your program
 *@str: string
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
int a = 0, b = 0, w, c = 0, length = 0, s, e;
char **arr, *now;

for (; *(str + length); length++);
w = cw(str++);
if (w == 0)
return (NULL);

arr = (char **) malloc(sizeof(char *) * (w + 1));
if (arr == NULL)
return (NULL);

while (a <= length)
{
if (str[a] == ' ' || str[a] == '\0')
{
if (c)
{
e = a;
now = (char *) malloc(sizeof(char) * (c + 1));
if (now == NULL)
return (NULL);
for (; s < e; *now++ = str[s++]);
*now = '\0';
arr[b] = now - c;
b++;
c = 0;
}
}
else if (c++ == 0)
s = a;
a++;
}
arr[b] = NULL;
return (arr);
}
