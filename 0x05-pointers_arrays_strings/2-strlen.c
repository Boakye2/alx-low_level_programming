#include "main.h"
/**
 * _strlen - the length of a string
 * @s : a pointer
 * Return: the result
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
