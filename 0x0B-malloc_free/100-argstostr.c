#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector.
 * Return: A pointer to the concatenated string,
 * or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
return (NULL);

int tl = 0;
int i, j;

for (i = 0; i < ac; i++)
tl += strlen(av[i]) + 1;

char *cc = malloc(sizeof(char) * tl);
if (cc == NULL)
return (NULL);

int index = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
cc[index] = av[i][j];
index++;
}
cc[index] = '\n';
index++;
}

cc[index] = '\0';

return (cc);
}
