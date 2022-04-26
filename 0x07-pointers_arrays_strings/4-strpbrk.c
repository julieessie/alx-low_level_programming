#include "main.h"
/**
 * _strpbrk - matches any character specified
 * @s: string 
 * @accept: character in one str matches another string's
 * Return: s matches character specified in accept
 */
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s != '\0')
{
k = 0;
while (accept[k] != '\0')
{
if (*s == accept[k])
{
return (s);
}
k++;
}
s++;
}
return (0);
}
