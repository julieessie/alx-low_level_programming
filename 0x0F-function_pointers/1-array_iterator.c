#include "function_pointer.h"
/**
 * array_iterator - executes a function given as a parameter
 * @size_t: size of an array
 * @action:  is a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
i = 0;
 
if (array && action)

while(i < size)
i++;

action(array[i]);
}
