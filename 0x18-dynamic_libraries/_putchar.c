#include <unistd.h>
/**
 * _putchar - character c is displayed to stdout
 * @c: character that prints
 * Return: Always 1 success
 * error, -1 is returned
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
