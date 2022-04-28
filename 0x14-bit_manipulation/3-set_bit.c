#include "main.h"
/**
 * set_bit - Function that set the value of a bit to 1 at a given index
 * @n: a pointer
 * @index: a index
 * Return: 1 succes or -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
