#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0;
 */
void more_numbers(void)
{
int i;
int num1;
int num2;
int result;

i = 0;
result = 0;

while (i < 10)
{
while (result <= 14)
{
if (result < 10)
{
num2 = result;
}
else
{
num1 = result / 10;
num2 = result % 10;
putchar(num1 + '0');
}
putchar(num2 + '0');
result++;
}

i++;
result = 0;
putchar('\n');
}
}
