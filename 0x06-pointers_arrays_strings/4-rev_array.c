#include "main.h"
/**
 * reverse_array - reverses content of array of integers
 * @a: array of integer
 * @n: number of elements of array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
int i, j;
for (i = 0; i < n / 2; i++)
{
j = a[i];
a[i] = a[n - i - 1];
a[n - i -1] = j;
}
}
