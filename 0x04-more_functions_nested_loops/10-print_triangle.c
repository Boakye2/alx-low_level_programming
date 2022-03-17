#include "main.h"
/**
 * print_triangle - a function that print some triangle
 * @size : size of triangle
 * Return: triangle with '#'s
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b <= (size - 1); b++)
		{
			for (a = 0; a < (size - 1) - b; a++)
			{
				_putchar(' ');
			}
			for (c = 0; c <= b; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
