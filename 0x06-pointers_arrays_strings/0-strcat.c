#include "main.h"
/**
 * _strcat - concantenates two strings
 * @dest: a pointer to a character that will be updated
 * @src: a pointer to a character that will be updated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int k;
i = 0;
while (dest[i] != '\0')
{
i++;
}
k = 0;
while (src[k] != '\0')
{
dest[i] = src[k];
k++;
i++;
}
dest[i] = '\0';
return (dest);
}  
