#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the
 * end of the file.
 * Return: If the function fails or filename
 * is NULL - -1.
 * If the file doesn't exist the user lacks write
 * permissions - -1.
 * Otherwise - 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file = open(filename, O_WRONLY | O_APPEND);
ssize_t byesW;
size_t len;

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

bytesW = write(file, text_content, len);
if (bytesW == -1)
{
close(file);
return (-1);
}
}

close(file);

return (1);
}
