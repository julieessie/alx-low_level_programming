#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of element in the array
 * @size: bytes for each in array
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
 
if (nmemb || size )
return (NULL);
p = malloc(nmemb * size);
if (!p)
return (NULL);
nmemb *= size;
while (nmemb--)
p[nmemb] = 0;
return (p);
}
