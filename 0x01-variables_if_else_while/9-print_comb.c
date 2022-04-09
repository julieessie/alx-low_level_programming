#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{

int ncomb;

for (ncomb = 48; ncomb <= 57; ncomb++)
{
putchar(ncomb);

if (ncomb == 57)
{
break;
}
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
