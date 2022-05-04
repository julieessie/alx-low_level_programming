#include "main.h"
/**
 * a_numeral - check if it is a digit
 * @n: Number
 * Return: if a number return 1 else 0
 */
int a_numeral(unsigned int n)
{
return (n >= '0' &&  n <= '9');
}

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: return sum
 */
int _atoi(char *s)
{
unsigned int num, i;
int x;

x = 1;
num = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (a_numeral(s[i]))
{
num = (s[i] - 48) + num * 10;

if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-')
{
x *= -1;
}
}
return (num *x);
}
