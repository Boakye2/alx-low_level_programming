#include "main.h"
/**
 * print_alphabet_x10 -Prints 10 times the alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int d = 0;

	while (d++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
