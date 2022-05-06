#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - array
 * @size: size of an array
 * @c: char
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int index;

if (size == 0)
{
return (NULL);
}

p = (char *) malloc(size * sizeof(c));

if (p == 0)
{
return (NULL);
}

else
index = 0;
while (index < size)
{
*(p + index) = c;
index++;
} 
return (p);
}
