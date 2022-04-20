#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: pointer to an int where changes are being made
 * Return: void
 */
void puts2(char *str)
{
int ch;

for (ch = 0; str[ch] != '\0'; ch++)
{
if (ch % 2 == 0)
_putchar(str[ch]);
}
_putchar('\n');
}
