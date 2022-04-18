#include <stdio.h>
/**
 * main - Entry point
 * Return: void
 */
int main(void)
{
int n = 100;
int x;

x = 1;
while (x <= n)
{
if ( x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz ");
}
else if (x % 3 == 0)
{
printf("Fizz ");
}
else if (x % 5 == 0)
{
if (x < n)
printf("Buzz ");
else
printf("Buzz");
}
else
printf("%x ", x);
}
i++;
}
printf("\n");
return (0);
