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

i = 0;
while (s1[i] != '\0')
i++;

j = 0;
while (s2[j] != '\0')
j++;

cc = malloc(sizeof(char) * (i + j + 1));

if (cc == NULL)
return (NULL);

i = 0;
while (s1[i] != '\0')
{
cc[i] = s1[i];
i++;
}

j = 0;
while (s2[j] != '\0')
{
cc[i] = s2[j];
i++;
j++;
}

cc[i] = '\0';
return (cc);
}
