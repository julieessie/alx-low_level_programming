#include "stdio.h"
/**
 *print_to_98 -  prints all natural numbers to ninety eight
 *@n: number to be counted from.
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}

else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
} 
}
