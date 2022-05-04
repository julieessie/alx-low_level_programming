#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int all;
if (argc > 0)

for (all = 0; all < argc; all++)
{
  printf("%s\n", argv[all]);
}
return (0);
}
