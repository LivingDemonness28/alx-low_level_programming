#include "main.h"
#include <stdio.h>

/**
 * error_exit - Print error message and exit
 * with specified code
 * @code: Exit code
 * @format: Error message format string
 * Return: The error message specified by the format
 * string
*/
void error(int code, const char *format, ...)
{
dprintf(STDERR_FILEND, format);
exit(code);
}

/**
 * main - Copies the content of
 * one file to another file
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
int ffrom = open(argv[1], O_RDONLY);
int fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH);
char buffer[BUFFER_SIZE];
ssize_t bytesR = read(ffrom, buffer, BUFFER_SIZE);
ssize_t bytesW;

if (argc != 3)
error(97, "Usage: cp file_from file_to\n");

if (ffrom == -1)
error(98, "Error: Can't read from file %s\n", argv[1]);

if (fto == -1)
error(99, "Error: Can't write to %s\n", argv[2]);

while (bytesR > 0)
{
bytesW = write(fto, buffer, bytesR);
if (bytesW == -1)
error(99, "Error: Can't write to %s\n", argv[2]);
}

if (bytesR == -1)
error(98, "Error: Can't read from file %s\n", argv[1]);

if (close(ffrom) == -1)
error(100, "Error: Can't closefd %d\n", ffrom);

if (close(fto) == -1)
error(100,"Error: Can't close fd %d\n", fto);

return (0);
}
