#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string contains list of characters
 * Return: num of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int l = 0, j, k;
while (accept[k])
{
j = 0;
while (s[j] != 32)
{
if (accept[k] == s[j])
{
l++;
}
j++;
}
k++;
}
return (l);
}
      
