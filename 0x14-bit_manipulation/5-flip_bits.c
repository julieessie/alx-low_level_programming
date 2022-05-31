#include "main.h"
/**
 * flip_bits - return no of bits to be flipped 1 no to another
 * @n: pointer to number
 * @m: next flipped no
 *
 * Return: number of bits to be reflected
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x_o_r = n ^ m, bits = 0;
while (x_o_r > 0)
{
bits_val += (x_o_r & 1);
x_o_r >>= 1;
}
return (bits_val);
}
