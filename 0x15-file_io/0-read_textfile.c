#include "main.h"
#include <unistd.h>
#include <fontl.h>
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
int file = open(filename, O_RDONLY);
char *buff;
ssize_t bytesR, bytesW;

if (filename == NULL || file == -1)
return (0);

buff = (char *)malloc(sizeof(char) * (letters + 1));
if (buff == NULL)
{
close(file);
return (0);
}

bytesR = read(file, buff, letters);
if (bytesR)
{
close(file);
free(buff);
return (0);
}

buff[bytesR] = '\0';

bytesW = write(STDOUT_FILENO, buff, bytesR);
if (bytesW != bytesR)
{
close(file);
free(buff);
return (0);
}

close(file);
free(buff);
return (bytesW);
}
