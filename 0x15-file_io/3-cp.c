#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file
 * Return: A pointer to the newly allocated buffer
*/
char *buffer(char *file)
{
char *buff = malloc(sizeof(char) * 1024);

if (!buff)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
}

/**
 * cf - closes file descriptors
 * @file_desc: The file descriptor to be closed
*/
void cf(int file_desc)
{
int i = close(file_desc);

if (file_desc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
exit(100);
}
}

/**
 * main - Copies contents of a file to another file
 * @argc: The number of arguments supplied to a program
 * @argv: An array of pointers to the arguments
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
char *buff = buffer(argv[2]);
int ffrom = open(argv[1], O_RDONLY);
int bytesR = read(ffrom, buff, 1024);
int fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
int bytesW;

do
{
if (ffrom == -1 || bytesR == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}

bytesW = write(fto, buff, bytesR);
if (fto == -1 || bytesW == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}

bytesR = read(ffrom, buff, 1024);
fto = open(argv[2], O_WRONLY | O_APPEND);
} while (bytesR > 0);

free(buff);
cf(ffrom);
cf(fto);
return (0);
}
