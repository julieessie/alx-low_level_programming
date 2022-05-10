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
unsigned int sizes1 = 0, sizes2 = 0, i;

if (s1 == NULL)
s1 = " ";

if (s2 == NULL)
s2 = " ";

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
p = malloc((sizes1 + n + 1) * sizeof(char));

if (p == NULL)
return (0);
}
for (i = 0; i < sizes1; i++)
{
p[i] = s1[i];
}

for (i = 0; i < (sizes1 + n); i++)
{
p[i] = s2[i - sizes1];
}

p[i] = '\0';

return (p);
}
