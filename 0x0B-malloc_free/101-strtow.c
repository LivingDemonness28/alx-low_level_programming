#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
int count = 0;
int i = 0;
int is_word = 0;

while (str[i] != '\0')
{
if (str[i] != ' ' && !is_word)
{
is_word = 1;
count++;
}
else if (str[i] == ' ')
{
is_word = 0;
}
i++;
}
return (count);
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

if (str == NULL || *str == '\0')
return NULL;

words = count_words(str);
if (words == 0)
return NULL;

word_array = malloc((words + 1) * sizeof(char *));
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
int l;
for (l = 0; l < j; l++)
free(word_array[l]);
free(word_array);
return NULL;
}

int m;
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
