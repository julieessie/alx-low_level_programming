#include "main.h"
/**
 * print_most_numbers - print numbers 
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int i;

i = 0;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
i++;

putchar(i + '0');
 
}
putchar('\n');
}
