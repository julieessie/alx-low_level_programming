#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int left_num;
int right_num;

for (left_num = 48; right_num <= 78; left_num++)
{
for (right_num = left_num + 1; right_num <= 78; right_num++)
{
putchar(left_num);
putchar(right_num);

if ((left_num == 56) && (right_num == 78))

break;
}

putchar(',');
putchar(' ');

}
putchar('\n');
return (0);
}
