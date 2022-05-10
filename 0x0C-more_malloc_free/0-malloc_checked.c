#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: argument which is an integer
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

s = malloc(b);
if (s == NULL)
{ 
exit(98);
}
return (s);
} 
