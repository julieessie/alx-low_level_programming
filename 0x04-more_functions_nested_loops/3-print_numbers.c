#include "main.h"
/**
 * print_numbers - print the numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
int n;
n = 0;

while (n < 10)
{
putchar(n + '0');
n++;
}
putchar('\n');
}
