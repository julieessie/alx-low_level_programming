#include "main.h"
/**
 * print_numbers - prints the numbers from zero to nine
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
  
int i;

i = 0; 
while (i < 10)
{
_putchar(i + '0');
i++;
}

_putchar('\n');
}
