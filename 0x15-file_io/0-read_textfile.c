#include "main.h"
/**
 * read_textfile -reads a text file and prints it to POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t f_o, f_r, f_w;
char *temp;

if (filename == NULL)
return (0);

f_o = open(filename, o_RDONLY);
if (f_o == -1)
return (0);

temp = malloc(sizeof(char) * letters);
f_r = read(f_o, temp, letters);
f_w = write(STDOUT_FILENO, temp, f_r);

free(temp)
close(f_o);

return (f_w);
}
