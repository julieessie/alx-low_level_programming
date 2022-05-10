#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string two
 * @n: base index
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *p;
unsigned int l = n, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
l++;

p = malloc(sizeof(char) * (l + 1));


if (p == NULL)
return (NULL);

l = 0;

for (i = 0; s1[i]; i++)
p[l++] = s1[i];

for (i = 0; s2[i] && i < n; i++)
p[l++] = s2[i];

p[l] = '\0';

return (p);
