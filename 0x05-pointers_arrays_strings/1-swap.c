#include "main.h"

/**
 * swap_int - swap
 * @a: the pointer
 * @b: the pointer
 * Return: the result
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

