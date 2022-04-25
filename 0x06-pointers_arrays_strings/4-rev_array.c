#include "main.h"
/**
 * reverse_array - reverses content of array of integers
 * @a: array of integer
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
j = a[i];
a[i] = a[n - i - 1];
a[n - i -1] = j;
}
}
