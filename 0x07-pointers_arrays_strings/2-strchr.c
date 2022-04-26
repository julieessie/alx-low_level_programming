#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: string
 * @c: character
 * Return: s
 */
char *_strchr(char *s, char c)
int i = 0, k;
while (s[i])
{
i++;
}
for (k = 0; k <= i; k++)
{
if (c == s[k])
{
s += k;
return (s);
}
}
return ('\0');
}
