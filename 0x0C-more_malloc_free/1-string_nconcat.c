#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string character 1
 * @s2: string character 2
 * @n: base index
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *p;
unsigned int sizes1 = 0, sizes2 = 0, l, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while s1[sizes1] != '\0')
{
sizes1++;
}

while s2[sizes2] != '\0')
{
sizes2++;
}
if (n > sizes2)
n = sizes2;

l = s1 + n;

p = malloc((l + 1);

if (p == NULL)
return (NULL);

for (i = 0; i < l; i++)

if (i < s1)
p[i] = s1[i];

else
{
p[i] = s2[i - sizes1];

p[i] = '\0';
}
return (p);
}
