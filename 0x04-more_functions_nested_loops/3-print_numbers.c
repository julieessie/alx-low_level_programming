#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9.
 * Return: Always 0
 */
void print_numbers(void)
{
int i;

i = 0;

for (i = 0; i < 10; i++)

putchar(i + '0');

putchar('\n');
} 
