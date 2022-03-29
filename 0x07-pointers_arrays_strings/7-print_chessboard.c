#include "main.h"
/**
 * print_chessboard - prints out a chessboard
 * @a: chessboard to print
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int s, p = 0;

	while (p < 8)
	{
		s = 0;
		while (s < 8)
			_putchar(a[p][s++]);
		_putchar('\n');
		p++;
	}
}
