#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of int
 * @n: number of elements of the array
 * Return: void 
 */
void reverse_array(int *a, int n)
{
int *begin, *end;
int i;

begin = a;
end = a;

for (i = 0; i < n - 1; i++)
{
end++;
}
