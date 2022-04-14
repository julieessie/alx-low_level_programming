#include "main.h"
/**
 *print_square - prints a square
 *@size: prints size
 *Return: Always 0.
 */

void print_square(int size)
{

int i;
int y;

if (size > 0)
{
for (i = 0; i < size; i++)

{

for (y = 0; y < size; y++)
{
_putchar(35);
}
_putchar('\n');
}

}

else
{

_putchar('\n');
}
} 
