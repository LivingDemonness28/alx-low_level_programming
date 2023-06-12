#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed (w)
 * when function fails or filename is NULL(0)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file = open(filename, O_RDONLY);
char *buff = malloc(sizeof(char) * letters);
ssize_t bytesR = read(file, buff, letters);
ssize_t bytesW = write(STDOUT_FILENO, buff, bytesR);

if (file == -1)
return (0);

free(buff);
close(file);
return (bytesW);
}
