#include "main.h"
/**
 * print_rev - prints a string
 * @s : a string
 * Return: nothing
 */
void print_rev(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}

	while (c > 0)
	{
		s--;
		_putchar(*s);
		c--;
	}
	_putchar('\n');
}
