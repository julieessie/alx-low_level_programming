#include "main.h"
/**
 * print_square - prints a square
 * @size: prints size
 * Return: Always 0.
 */
void print_square(int size)
{

int i;
int y;

if (size > 0)
{
for (i = 0, y = 0; (i < (size)) && (y < (size)); i++, y++)
{
putchar(35);
}
putchar('\n');
}

else
{

putchar('\n');
}
} 
