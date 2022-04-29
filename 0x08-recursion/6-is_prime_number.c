#include "main.h"
/**
 * _result - result of a prime
 * @n: number
 * @r: recursively number
 * Return: 1 if prime 0 otherwise
 */
int _result(int n, int r)
{
if (r == n - 1)
{
return (1);
}
else if n % r == 0)
{
return (0);
}

if (n % r != 0)
{
return (_result(n, r + 1));
}
return (0);
}

/**
 * is_prime_number - result prime number,not prime
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
int r;

r = 2;
if (n < 2)
{
return (0);
}

if (n == 2)
{
return (1);
}
return (_result(n, r));
}
