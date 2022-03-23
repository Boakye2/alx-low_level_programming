#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest:first string
 * @src: second string
 * Return: a pointe to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;
	while (*(dest + 1))
		a++;
	while ((*(dest + a) = *(src + b)))
	{
		a++;
		b++;
	}
	return (dest);
}
