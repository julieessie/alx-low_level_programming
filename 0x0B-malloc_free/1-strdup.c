#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer using malloc
 * @str: string
 * Return: a pointer
 */
char *_strdup(char *str)
{
char *a;
int i, j;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
a[i] = str[i];

a = malloc(i * sizeof(*a) + 1);
if (a == NULL)

return (NULL);

for (j = 0; j < i; j++)
a[j] = str[j];
a[j] = '\0';
return (a);
}
