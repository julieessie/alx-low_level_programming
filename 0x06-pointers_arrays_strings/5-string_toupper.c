#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: char
 */
char *string_toupper(char *)
{
int i;

for (i = 0; st[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
return (s);
}
  
