#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from  to 0 to 14
 * Return: the result
 */
void more_numbers(void)
{
	int c;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
