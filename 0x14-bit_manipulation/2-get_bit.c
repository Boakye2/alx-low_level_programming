#include "main.h"
/**
 * get_bit - Function that return the value of a bit at a given index
 * @n: a number
 * @index: a index
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int)))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
