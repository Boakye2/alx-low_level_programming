#include "main.h"
/**
 * clear_bit - Function that clear the value of a bit to 0 at a given index
 * @n: a pointer
 * @index: a index
 * Return: 1 succes or -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);
	*n ^= ~(1 << index);
	return (1);
}
