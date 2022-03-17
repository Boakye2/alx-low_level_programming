#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of straight
 * Return: the result
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
			_putchar('_');

		_putchar('\n');
	}
}
