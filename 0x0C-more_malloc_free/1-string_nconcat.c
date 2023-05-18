#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes from s2 to concatenate
 * Return: pointer to the concatenated string
 *If the function fails, it returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
char *res = NULL;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
n = len2;

res = malloc((len1 + n + 1) * sizeof(char));
if (res == NULL)
return (NULL);

strcpy(res, s1);
strncat(res, s2, n);
res[len1 + n] = '\0';
return (res);
}
