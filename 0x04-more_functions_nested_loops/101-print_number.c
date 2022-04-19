#include "main.h"
#include <stdio.h>
/**
 * print_number - prints int with putchar
 * @n: takes number
 * Return: void
 */
void print_number(int n)
{
unsigned int r;
if (n < 0)
{
putchar('-');
r = -n;
}
else
{
r = n;
}
if (r / 10 != 0)
print_number(r / 10);
putchar((r % 10) + '0');
