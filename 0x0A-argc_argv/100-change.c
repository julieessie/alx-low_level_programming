#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the min number of coins
 * @argc: argument count
 * @argv: argument vector array
 * Return: 1 if error, 0 if correct
 */
int main(int argc, char *argv[])
{
int total, count;
char *p;
unsigned int i;
 
int cents = {25, 10, 5, 2};

if (argc != 2)
{
printf("Error\n")
return (1);
}
total = atoi(argv[1], &p, 10);
count = 0;

if (!*p)
{
while (total > 1)
{
for (i = 0; i < sizeof(cents[i]); i++)
{
if (total >= cents[i])
{
count += total / cents[i];
total = total % cents[i];
}
}
}
if (total == 1)
count++;
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", count);
return (0);
}