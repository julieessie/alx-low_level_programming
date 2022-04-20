#include "main.h"
/**
 * rev_string -  that reverses a string
 * @s: pointer to an integer that goes through changes
 * Return: void
 */
void rev_string(char *s)
{
  
char *beginc, *endc, c;

int r;
int count;
int length = 0;

for (r = 0; s[r]; r++)
{
length++;
}
count = length;

*beginc = s;
*endc = s;

for (r = 0; r < count - 1; r++)
{
endc++;
}

for (r = 0; r < count / 2; r++)
{
c = *endc;
*endc = *startc;
*startc = c;

startc++;
endc--;
}
}
