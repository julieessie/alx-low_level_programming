#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: string
 * @accept: characters accepted
 * Return: string accepted
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
return (0);
}
