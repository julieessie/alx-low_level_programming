#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: count argument
 * @argv: argument char
 * Return: 0 if true 1 if false
 */
int main(int argc, char *argv[])
{
int k, j;
if (argc == 3)
{
k = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", k *j);   
return (0);
}
printf("Error\n");
return (1);
}
