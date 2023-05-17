#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int q = 0, r, s = 0;
for (r = 0; str[r] != '\0'; r++)
{
if (str[r] == ' ')
q = 0;
else if (q == 0)
q = 1;
s++;
}
return (s);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
char **arr1, *s1;
int i, j = 0, len = 0, words, m = 0, a, z;

while (*(str + len))
len++;

words = count_words(str);

if (words == 0)
return (NULL);

arr1 = (char **) malloc(sizeof(char *) * (words + 1));

if (arr1 == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (m)
{
z = i;
s1 = (char *) malloc(sizeof(char) * (m + 1));
if (s1 == NULL)
return (NULL);

while (a < b)
*s1++ = str[a++];

*s1 = '\0';
arr1[j] = s1 - m;
j++;
m = 0;
}
}
else if (m++ == 0)
a = i;
}
arr1[j] = NULL;
return (arr1);
}
