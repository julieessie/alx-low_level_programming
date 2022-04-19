#include <stdio.h>
/**
 * main - prime factors of numbers
 * Return: Always 0
 */
int main(void)
{
unsigned long n, p, maxfact;
n = 612852475143;
maxfact = 1;

for (p = 3; p <= n; p += 2)
{
while (n % p == 0)
{
maxfact = n;
n = n / p;
}
}
printf("%lu\n", maxfact);
return (0);
}
