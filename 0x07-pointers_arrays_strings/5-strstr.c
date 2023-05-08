#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
while (*needle != '\0' && *haystack == *needle)
{
haystack++;
needle++;
}
if (*needle == '\0')
{
return haystack;
}
haystack++;
}
return (NULL)
}
