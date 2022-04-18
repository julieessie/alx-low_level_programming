p#include "main.h"
/**
 * print_diagonal -prints diagonal line
 *@n: print int
 * Return: Always 0.
 */
void print_diagonal(int n)
{

int i;
int a;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (a = 0; a < i; a++)
{
putchar(' ');
}
putchar(92);
putchar('\n');
}
}
else
{
putchar('\n');
}
}
