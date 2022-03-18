#include "main.h"

/**
 * print_square - prints a square
 * @n: the size
 * Return: the result
 */
void print_square(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('#');
			for (b = 2; b <= n; b++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
