#include "main.h"
/**
 * _puts - print a string
 * @s : a pointer
 * Return: nothing
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
