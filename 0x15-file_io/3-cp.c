#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed
 * @argv: double pointer
 * Return: the actual number of letters it could read and print
 */
int main(int argc, char **argv)
{
int f_one, f_two, i;
char temp[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
f_one = open(argv[1], O_RDONLY);
if (f_one == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
f_two = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
while ((i = read(f_one, temp, 1024)) > 0)
{
if (write(f_two, temp, i) != i || f_two == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(f_one) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_one);
exit(100);
}
if (close(f_two) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_two);
exit(100);
}
return (0);
}
