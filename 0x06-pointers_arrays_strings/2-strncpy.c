#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest:first string
 * @src: second string
 * @n: the bytes
 * Return: a pointe to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && *(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a < n)
	{
		*(dest + a) = '\0';
		a++;
	}
	return (dest);
}
