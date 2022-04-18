#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: used to measure size of triangle
 * Return: void
 */
void print_triangle(int size)
{
int w;
int h;

if (size > 0)
{
for (w = 0; w < size; w++)
{
for (h = 0; h < size; h++)
{
if ((size - w - 1) > h)
putchar(' ');
else
putchar('#');
}
putchar('\n');
}
}
else
{
putchar('\n');
}
}
