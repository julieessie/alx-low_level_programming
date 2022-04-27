#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the 2 diagonals of square matrix
 * @a: array
 * @size: of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1, sum2;
sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[(size + 1) * i];
sum2 += a[(size - 1) * (i + 1)];
}
printf("%i, %i\n", sum1, sum2);
}
