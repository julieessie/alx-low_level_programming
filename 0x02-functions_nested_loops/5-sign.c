#include "main.h"
/**
 *print_sign -that prints the sign of a number.
 *@n: the number that is been used to print sign.
 *Return: 1 if num greater than zero, num is zero,less than zero.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
