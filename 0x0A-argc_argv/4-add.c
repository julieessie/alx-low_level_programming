#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: argument vector, array
 * Return: 1 if error 0 if correct
 */
int main(int argc, char *argv[])
{
int sum, i;
char *p;
int n;

sum = 0;
if (argc > 1)
{
for (i = 1; argv[i]; i++)
{    
n = strtol(argv[i], &p, 10);
if (!*p)
sum += n;
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", total);
return (0);
}
