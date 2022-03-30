#include <unistd.h>
/**
 * _putchar - write the character
 * @c: a character
 * Return: 1 if succes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
