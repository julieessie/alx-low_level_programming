#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);
return (0);
}
