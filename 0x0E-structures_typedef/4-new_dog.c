#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - duplicates string
 * @s: string pointer
 * Return: pointer
 */
char *_strdup(char *s)
{
int i, l;
char *p;

if (s == NULL)
{
return (NULL);
}

for (l = 0; s[l] != '\0'; l++)
;
p = malloc(sizeof(char) * (l + 1));
if (p == NULL)
{
return (NULL);
}
for (i = 0; s[i] != '\0'; i++)
{
p[i] = s[i];
}
p[i] = '\0';
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
aB = malloc(sizeof(dog_t));
if (aB == NULL)
{
return (NULL);
}

n_name = _strdup(name);
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
