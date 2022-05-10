#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer
 * @old_size: size allocated space of ptr
 * @new_size: new size of new memory block
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p, *r;
unsigned int i;
if (ptr != NULL)
p = ptr;

else
{
return (malloc(new_size));
}
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
r = malloc(new_size);
if (r == NULL)
return (0);
for (i = 0; i < (old_size || i < new_size); i++)
{
*(r + i) = p[i];
}
free(ptr);
return (r);
}
