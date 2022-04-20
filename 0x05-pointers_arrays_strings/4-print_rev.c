#include "main.h"
/**
 * print_rev -  prints a string in reverse
 * @s: pointer to the integer that is going through this change
 * Return: void
 */
void print_rev(char *s)
{
int r
while(s[r] != '\0')
{
r++;
}
for (r = 1 - 1; r >= 0; r--)
{
_putchar(s[r]);
}
_putchar('\n');
}
