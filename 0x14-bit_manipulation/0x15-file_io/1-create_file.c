#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the
 * file to create.
 * @text_content: A pointer to a string to
 * write to the file.
 * Return: If the function fails - -1.
 * Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
int file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
int res = 1;
size_t len;
ssize_t byteW;

if (filename == NULL)
{
return (-1);
}

if (file == -1)
{
return (-1);
}

if (text_content != NULL)
{
len = 0;
while (text_content[len] != '\0')
{
len++;
}

byteW = write(file, text_content, len);
if (byteW == -1)
{
res = -1;
}
}

close(file);

return (res);
}
