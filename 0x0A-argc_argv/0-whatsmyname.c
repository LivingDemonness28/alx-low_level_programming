#include <stdio.h>
#include "main.h"

/**
 * name - prints the name of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: Always 0 (Success)
*/
int name(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
