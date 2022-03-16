#include "main.h"

/**
 *  print_sign - print the sign of number.
 *  @n: the number
 *
 *  Return: 1 if number is positive , 0 if is equal 0 and -1 other
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

