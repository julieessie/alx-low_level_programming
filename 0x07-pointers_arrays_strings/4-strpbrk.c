#include "main.h"
/**
 * _strpbrk - matches any character specified
 * @s: string 
 * @accept: character in one str matches another string's
 * Return: s matches character specified in accept
 */
char *_strpbrk(char *s, char *accept)
{
int k = 0, j;
while (s[k])
{
j = 0;
while (accept[j])
{
if (s[k] == accept[j])
{
s += k;
return (s);
}
j++;
}
k++;
}
return ('\0');
}
