#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int first_numbers;
int second_numbers;
for (first_numbers = 0; first_numbers < 100; first_numbers++)
{
for (second_numbers = first_numbers + 1; second_numbers < 100; second_numbers++)
{
putchar(first_numbers / 10 + '0');
putchar(first_numbers % 10 + '0');

putchar(' ');
putchar(second_numbers % 10 + '0');
if (first_numbers == 98 && second_numbers == 99)
{
break;
}
putchar(',');
putchar(',');

}
}
putchar('\n');

return (0);
}
