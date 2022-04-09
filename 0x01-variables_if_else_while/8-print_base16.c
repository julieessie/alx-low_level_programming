#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char nbase;

for (nbase = 48; nbase <= 57; nbase++)
{
putchar(nbase);
}

for (nbase = 97; nbase <= 102; nbase++)
{
putchar(nbase);
}
 
putchar('\n');

return (0);
}
