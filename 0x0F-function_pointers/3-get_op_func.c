#include "3-calc.h"
/**
 * get_op_func - function pointer that selects the correct function
 * for operation asked by user
 * @s: the operator given by the user
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;
return (ops[i].f);
}
