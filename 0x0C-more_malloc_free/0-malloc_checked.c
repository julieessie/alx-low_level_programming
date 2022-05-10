#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: argument which is an integer
 * Return: a pointer to allocated memory
 * if malloc fails, the malloc checked function
 * should cause normal process termination
 * with a status value of 98
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
