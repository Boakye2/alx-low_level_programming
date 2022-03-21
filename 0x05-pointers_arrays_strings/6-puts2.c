#include "main.h"
/**
 * puts2 - prints one char out of 2
 * @s: a string
 */
void puts2(char *s)
{
	int a, b = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (b < a)
	{
		_putchar(s[b]);
		b += 2;
	}
	_putchar('\n');
}
