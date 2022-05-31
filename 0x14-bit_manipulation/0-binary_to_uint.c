#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string
 * Return: the converted number or 0 if there is one
 * or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int val = 0;

if (b == NULL)
return (0);

for (i = 0; b[i]; i++)
{

if (b[i] != '0' && b[i] != '1')
return (0);

val = 2 * val + (b[i] - '0'); 
}
return (val);
}
