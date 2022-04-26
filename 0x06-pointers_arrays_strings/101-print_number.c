#include "main.h"

/**
 * print__number - prints an integer
 * @n: inputs integer
Return: no return
*/
void print_number(int n)
{
unsigned int k, j, count;

if (n < 0)
{
_putchar(45);
k = n * -1;
}
else
{
k = n;
}
j = k;
count = 1;
while (j > 9)
{
j /= 10;
count *= 10;
}
for (; count >= 1; count /=10)
{
_putchar(((k / count) % 10) + 48);
}
}
