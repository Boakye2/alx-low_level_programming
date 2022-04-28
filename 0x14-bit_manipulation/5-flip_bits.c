#include "main.h"
/**
 * flip_bits - Function that return the number of a bits need to flip
 * @n: a number
 * @m: a number
 * Return: the result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, b;

	xor = n ^ m;
	b = 0;
	while (xor > 0)
	{
		b += (xor & 1);
		xor >>= 1;
	}
	return (b);
}
