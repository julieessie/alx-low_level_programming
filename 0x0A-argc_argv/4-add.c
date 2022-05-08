#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: argument vector, array
 * Return: 1 if error 0 if correct
 */
int main(int argc, char **argv)
{
int i, k;
int sum;

sum = 0;

for (i = 1; i < argc; i++)
{
for (k = 0; argv[i]k]; k++)
{
if (argv[i][k] < 48 || argv[i][k] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
if (argc <= 1)
{
printf("0\n");
}  
else
printf("%d\n", sum);
return (0);
}
