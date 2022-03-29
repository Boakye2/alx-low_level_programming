#include "main.h"
/**
 * _memscpy - fills n bytes of memory
 * @s: a pointer
 * @b: a second pointer
 * @n: num bytes
 * Return: pointer
 */
char *_memcpy(char *s, char *b, unsigned int n)
{
	unsigned int i = 0;
	char *beg = s;

	while (i < n)
	{
		*s++ = *b++;
		i++;
	}
	return (beg);
}
