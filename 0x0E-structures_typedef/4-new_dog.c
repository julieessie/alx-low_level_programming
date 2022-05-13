#include <stdlib.h>
#include "dog.h"
/**
 * _strdp - duplicates string
 * @str: duplicated string
 * Return: pointer
 */
char *_strdup(char *str)
{
int l = 0;
char *p;

if (str == NULL)
return (NULL)
while (*str++)
l++;
p = malloc(sizeof(char) * (l + 1));
if (!p)
return (NULL);
for (l++; l--;)
p[l] = *--str;
return (P);
}


/**
 * new_dog - creates a new dog 
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
if (!d)
return (NULL);
d->name = _strdup(name);
if (name && !d->name)
return (free(d), NULL);
d->owner = _strdup(owner);
if (owner && !d->owner)
return (free(d->name), free(d), NULL);
d->age = age;
return (d);
}
