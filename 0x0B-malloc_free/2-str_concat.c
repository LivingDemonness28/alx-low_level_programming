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
char *concatenated;
int len1 = 0, len2 = 0, tl = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

tl = len1 + len2;
concatenated = malloc(sizeof(char) * (tl + 1));

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1;

for (j = 0; j < len2; j++, i++)
concatenated[j] = s2[j];

concatenated[tl] = '\0';
return (concatenated);
}
