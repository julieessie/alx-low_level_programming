#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: argument which is an integer
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{ 
exit(98);
}
return (ptr);
} 
