#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string contains list of characters
 * Return: num of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int l = 0, j, k = 0;
while (accept[l])
j = 0;
if (s[j] != 32)
{
if (accept[l] == s[j])
{
k++;
}
j++;
}
l++;
}
return (k);
}
      
