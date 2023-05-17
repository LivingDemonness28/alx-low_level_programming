#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
int words;
char **word_array;
int i = 0, j = 0, k = 0, word_len = 0;

if (str == NULL || *str == '\0')
return NULL;

words = count_words(str);
if (words == 0)
return NULL;

word_array = malloc((words + 1) * sizeof(char *));
if (word_array == NULL)
return NULL;

while (str[i] != '\0')
{
if (str[i] != ' ')
{
word_len++;
if (str[i + 1] == ' ' || str[i + 1] == '\0')
{
word_array[j] = malloc((word_len + 1) * sizeof(char));
if (word_array[j] == NULL)
{
for (int l = 0; l < j; l++)
free(word_array[l]);
free(word_array);
return NULL;
}

for (int m = 0; m < word_len; m++, k++)
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
