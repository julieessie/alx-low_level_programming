#include "main.h"
/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * 0 when it fails or there is no file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *temp;

if (filename == NULL)
return (0);

o = open(filename, O_RDONLY);
if (o == -1)
return (0);
temp = malloc(sizeof(char) * letters);
r = read(o, temp, letters);
w = write(STDOUT_FILENO, temp, r);

free(temp);
close(o);
return (w);
