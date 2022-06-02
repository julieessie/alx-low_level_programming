#include "main.h"
/**
 * create_file -creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int o, w, j;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (j = 0; text_content[j];)
j++;
}

o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, j);

if (o == -1 || w == -1)
return (-1);

close(o);

return (1);
}
