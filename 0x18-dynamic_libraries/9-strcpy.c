#include "main.h"
/**
 * _strcpy - copies the string
 * @src: pointer to a character that will be updated
 * @dest: pointer to a char that will be updated
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
