#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: numbers
 * Return: void
 */
void print_times_table(int n)
{
int x, y, result;

if(!(n > 15 || n < 0))
{for (x = 0; x <= n; x++)
{
for( y = 0; y <= n; y++)
{
result = (x * y);
if (y != 0)
{
_putchar(',');
_putchar(' ');
}
if (result < 10 && y != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((res % 10) + '0');
}
else if (res >= 10 && res < 100)
{
_putchar(' ');
_putchar((res / 10) + '0');
_putchar((res % 10) + '0')
}
else if (res >= 100 && y != 0)
{
_putchar((res / 100) + '0');
_putchar((res / 10) % 10 + '0');
_putchar((res % 10) + '0'); 
}
else
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
}
