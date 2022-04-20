#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: a pointer to integer that is experiencing changes
 * Return: void;
 */
void puts_half(char *str)
{
int h;
int last;
 
h = 0;
while (str[h] != '\0')
{
h++;
}
last = (h + 1) /2;
for (h = last; str[h]; h++)
{
_putchar(str[h]);
}
_putchar('\n');
}
