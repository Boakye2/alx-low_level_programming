#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of diagonal
 * Return: the result
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
