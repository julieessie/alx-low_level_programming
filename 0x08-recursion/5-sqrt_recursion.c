#include "main.h"
/**
 * _result - result of function sqrt
 * @k: integer
 * @j: integer
 * Return: result of sqrt
 */
int _result(int i, int n)
{
if (n == 0 || n == 1)
return (n);

else if (i * i < n)
return (_result(i + 1, n));

else if (i * i == n)
return (i);
return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: sqrt_recursion
 */
int _sqrt_recursion(int n)
{
int i = 0;
if (i < 0)

return (-1);

else

return (_result(i, n));

}
