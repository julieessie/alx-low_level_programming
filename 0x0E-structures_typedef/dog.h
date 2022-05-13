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

typedef struct dog dog_rt;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
