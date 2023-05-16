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
int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = j = 0;

while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;

cc = malloc(sizeof(char) * (i + j + 1));

if (cc == NULL)
return (NULL);

i = j = 0;

while (s1[i] != '\0')
{
cc[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
cc[j] = s2[j];
j++;
}

cc[i] = '\0';
return (cc);
}
