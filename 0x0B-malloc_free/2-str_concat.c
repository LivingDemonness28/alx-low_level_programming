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
unsigned int len1 = 0, len2 = 0;
unsigned int i, j;
char *cc;

if (s1 != NULL)
{
while (s1[len1])
len1++;
}

if (s2 != NULL)
{
while (s2[len2])
len2++;
}

cc = malloc(sizeof(char) * (len1 + len2 + 1));
if (cc == NULL)
return (NULL);

for (i = 0; i < len1; i++)
cc[i] = s1[i];

for (j = 0; j < len2; j++)
cc[i + j] = s2[j];

cc[i + j] = '\0';

return (cc);
}
