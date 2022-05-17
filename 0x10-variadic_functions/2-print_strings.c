#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @n: num of strings as arguments
 * @separator: string to be printed between strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str_p;
va_list l;

va_start(l, n);

for (i = 0; i < n; i++)
{
str_p = va_arg(l, char *)

if (str_p == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str_p);
}

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

va_end(l);
printf("\n");
}
