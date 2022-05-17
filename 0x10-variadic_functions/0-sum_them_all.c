#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: all arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;

va_list l;

sum = 0;

va_start(l, n);

for (i = 0; i < n; i++)

sum += va_arg(l, int);

va_end(l);

return (sum);
}
