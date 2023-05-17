#include <stdlib.h>
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

return count;
}
