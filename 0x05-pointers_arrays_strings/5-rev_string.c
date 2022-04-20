#include "main.h"
/**
 * rev_string -  that reverses a string
 * @s: pointer to an integer that goes through changes
 * Return: void
 */
void rev_string(char *s)
{  
char *begin_c, *end_c, c;

int r;
int count;
int length = 0;

for (r = 0; s[r]; r++)
{
length++;
}
count = length;

begin_c = s;
end_c = s;

for (r = 0; r < count - 1; r++)
{
end_c++;
}

for (r = 0; r < count / 2; r++)
{
c = *end_c;
*end_c = *begin_c;
*begin_c = c;

begin_c++;
end_c--;
}
}
