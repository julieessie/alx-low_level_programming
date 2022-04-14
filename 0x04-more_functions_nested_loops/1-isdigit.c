#include "main.h"

/**
 * _isdigit - that checks for a digit (0 through 9)
 * @c: to be checked if its a digit 
 * Return: returns 1 if its a digit, 0 if otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
