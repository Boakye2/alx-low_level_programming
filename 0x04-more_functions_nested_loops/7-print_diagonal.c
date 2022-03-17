#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of diagonal
 * Return: the result
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		n = n - 1;
	}

	_putchar('\n');
}
