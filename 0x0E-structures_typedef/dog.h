#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: a cute dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog_t;

#endif
