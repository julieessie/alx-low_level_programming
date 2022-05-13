#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @src: char pointer
 * Return: pointer
 */
char *_strdup(char *src)
{
int i, l;
char *p;

if (src == NULL)
{
return (NULL);
}

for (l = 0; src[l] != '\0'; l++);

p = malloc(sizeof(char) * (l + 1));

if (p == Null)
{
return (NULL);
}

for (i = 0; src[i] != '\0'; i++)
{
p[i] = src[i]
p[i] = '\0';
}
return (p);
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
dog_t *aB;
char *n_name, *n_owner;

if (name == NULL || owner == NULL)
{
return (NULL);
}
a = malloc(sizeof(dog_t));
if (aB == NULL)
{
return (NULL);
}

n_name = strdup(name);
if (n_name == NULL)
{
free(aB);
return (NULL);
}
(*aB).name = n_name;

(*aB).age = age;

n_owner = _strdup(owner);
if (n_owner == NULL)
{
free((*aB).name);
free(aB);
return (NULL);
}
(*aB).owner = n_owner;

return (aB);
}
