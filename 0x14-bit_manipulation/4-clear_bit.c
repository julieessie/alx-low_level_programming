#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer of number
 * @index: index starts from zero
 * Return:  1 for success and 0 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(UL << index) & *n);
return (1);
}
