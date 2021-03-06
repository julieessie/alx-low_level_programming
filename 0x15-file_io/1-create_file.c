#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 if successful -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
int o, w, j;
if (filename == NULL)
return (-1);
o = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (o == -1)
return (-1);

if (text_content != NULL)
{
for (j = 0, text_content[j]; j++)
;
w = write(o, text_content, j);
if (w == -1)
return (-1);
}
close(o);
return (1);
}
