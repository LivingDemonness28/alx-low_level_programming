#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int count = argc - 1;

printf("%d\n", count);
return (0);
}
