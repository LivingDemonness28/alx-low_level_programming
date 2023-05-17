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
int words, i, j, k, word_len;
char **word_array;
int m, l;

if (str == NULL || *str == '\0')
return NULL;

words = count_words(str);
if (words == 0)
return NULL;

word_array = malloc((words + 2) * sizeof(char *));
if (word_array == NULL)
return NULL;

i = 0;
j = 0;
k = 0;
word_len = 0;

while (str[i] != '\0')
{
if (str[i] != ' ' && str[i] != '.' && str[i] != '\n')
{
word_len++;
if (str[i + 1] == ' ' || str[i + 1] == '.' || str[i + 1] == '\n' || str[i + 1] == '\0')
{
word_array[j] = malloc((word_len + 1) * sizeof(char));
if (word_array[j] == NULL)
{
for (l = 0; l < j; l++)
free(word_array[l]);
free(word_array);
return NULL;
}

for (m = 0; m < word_len; m++, k++)
word_array[j][m] = str[k];
word_array[j][word_len] = '\0';
j++;
word_len = 0;
}
}
i++;
}
word_array[words] = NULL;
return word_array;
}
