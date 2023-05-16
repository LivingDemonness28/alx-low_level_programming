#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the concatenated string,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *cc;
int len1 = 0, len2 = 0, total = 0, i, j;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
total = len1 + len2;
cc = malloc(sizeof(char) * (total + 1));

if (cc == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
cc[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
cc[j] = s2[j];
}
return (cc);
}
