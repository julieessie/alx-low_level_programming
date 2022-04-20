#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an int that is experiencing changes
 * @n: return value n
 * Return: void
 */
void print_array(int *a, int n)
{
int e;
e = 0;
while (e < n)
{
printf("%d", a[e]);
if (e < n - 1)
{
printf(", ");
}
e++;
}
printf("\n")
}
  
