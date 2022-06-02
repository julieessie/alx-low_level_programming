#include "main.h"
/**
 * read_textfile -reads a text file and prints it to POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t f_O, f_R, f_W;
char *temp;

if (filename == NULL)
return (0);

temp = malloc(sizeof(char) * letters);
if (temp == NULL)
return (0);

f_O = open(filename, o_RDONLY);
f_R = read(f_O, temp, letters);
f_W = write(STDOUT_FILENO, temp, f_R);

if (f_O == -1 || f_R == -1 || f_W == -1)

free(temp)
return (0);

close(f_O);

return (f_W);
}
