#include "main.h"
/**
 * @dest: pointer to a character that is going through modification
 * @src: pointer to a character going through modification
 * @n: value used
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
 
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
