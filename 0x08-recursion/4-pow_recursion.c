#include "main.h"
/**
 * _pow_recursion - function
 * @a: value
 * @b: power
 * Return: the result
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	if (b == 1)
		return (a);
	return (a *= _pow_recursion(a, b - 1));
}
