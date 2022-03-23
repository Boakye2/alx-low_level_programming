#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest:first string
 * @src: second string
 * @n: the bytes
 * Return: a pointe to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = b = 0;
	while (*(dest + 1))
		a++;
	while (b < n && *(src + b))
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	if (b < a)
		*(dest + a) = *(src + b);
	return (dest);
}
