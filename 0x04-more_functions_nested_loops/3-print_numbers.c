#include "main.h"

/**
 * print_numbers - prints the numbers from  to 0 to 9
 * Return: the result
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		_putchar(c + '0');

	_putchar('\n');
}
