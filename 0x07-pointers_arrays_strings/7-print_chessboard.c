#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i, k;
i = 0;
while (i < 8)
{
k = 0;
while (k < 8)
{
_putchar(a[i][k]);
k++;
}
_putchar('\n');
i++;
}
}