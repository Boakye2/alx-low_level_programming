#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest:first string
 * @src: second string
 * Return: a pointe to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	dest = dest + src;
	dest = dest + '\0';
	return (dest);
}
