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

	a = n;
	b = n;
	while (a > 0)
	{
		while (b > 0)
		{
			_putchar('#');
			b = b - 1;
		}
		_putchar('\n');
		b = n;
		a = a - 1;
	}

	_putchar('\n');
}
