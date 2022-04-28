#include "main.h"
#include <unistd.h>
/**
 * _putchar - print a character
 * @c: a character
 * Return: 1 succes or -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
