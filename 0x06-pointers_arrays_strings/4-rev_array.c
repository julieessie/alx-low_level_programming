#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of intsger
 * @n: number of elements of the array
 * Return: Always 0 
 */
void reverse_array(int *a, int n)
{
int i, j;
for (i = 0; i < (n - 1); i++)
{
j = a[i];
a[i] = a[n - i - 1];
a[n - i -1] = j;
}
}
