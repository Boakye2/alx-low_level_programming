#include<unistd.h>
/**
 * _putchar - print the character
 * @c: an character
 * Return: 1 success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
