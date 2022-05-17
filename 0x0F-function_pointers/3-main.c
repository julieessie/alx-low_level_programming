#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int n_1, n_2;
char *op;

if (argc != 4)
{

printf("Error\n");
exit(98);
}
n_1 = atoi(argv[1]);
op = argv[2];
n_2 = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*op == '/' && n_2 == 0) || (*op == '%' && n_2 == 0))
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(op)(n_1, n_2));

return (0);
}
