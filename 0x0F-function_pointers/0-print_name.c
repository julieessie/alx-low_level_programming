#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - prints a name
 * @name: name of person to print
 * @f: pointer to the print function
 * Return: void 
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
return;
}
