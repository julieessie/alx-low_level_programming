#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to an array
 */
int *array_range(int min, int max)
{
int *a, i = 0, mi = min;

if (min > max)
return (NULL);

a = malloc((max - min + 1) * sizeof(int));

if (!a)
return (NULL);

while (i <= max - min)
a[i++] = mi++;
return (a);
}
