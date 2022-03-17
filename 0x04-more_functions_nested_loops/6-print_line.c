#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of straight
 * Return: the result
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('-');
		n = n - 1;
	}

	_putchar('\n');
}
