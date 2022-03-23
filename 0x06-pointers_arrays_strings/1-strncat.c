#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest:first string
 * @src: second string
 * @n: bytes
 * Return: a pointe to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	dest = dest + src[1:n];
	dest = dest + '\0';
	return (dest);
}
