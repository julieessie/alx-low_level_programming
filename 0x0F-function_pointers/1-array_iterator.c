#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: integer array
 * @size: size of an array
 * @action: is a pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array && action)
return;

for (i = 0; i < size; i++)

action(array[i]);

}
