#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The string to be concatenated
 * @s2: The string to be concatenated to s1
 * Return: Null on failure otherwise pointer
 */
char *str_concat(char *s1, char *s2)
{
char *C_str;
int i, j, k;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
k++;

C_str = malloc(sizeof(char) * k);

if (C_str == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
C_str[j++] = s1[i];

for (i = 0; s2[i] != '\0'; i++)
C_str[j++] = s2[i];

return (C_str);
}
