#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * buff - Allocates 1024 bytes for a buffer
 * @file: The name of the file
 * Return: A pointer to the buffer
*/
char *buffer(char *file)
{
char *buff = malloc(sizeof(char) * 1024);

if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}

/**
 * cf - closes file descriptors
 * @fd: file descriptor to be closed
*/
void cf(int fd)
{
int i = close(fd);

if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies contents from one file to another
 * @argc: The number of arguments supplied
 * @argv: An array of pointers to the arguments
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
int bytesW;
char *buff = buffer(argv[2]);
int ffrom = open(argv[1], O_RDONLY);
int bytesR = read(ffrom, buff, 1024);
int fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

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
fto = open(argv[2]. O_WRONLY | O_APPEND);
}
while (bytesR > 0);

free(buff);
cf(ffrom);
cf(fto);

return (0);
}
