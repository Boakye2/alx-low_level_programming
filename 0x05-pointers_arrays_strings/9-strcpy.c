#include "main.h"
/**
 * *_strcpy - copy the string
 * @a: a pointer
 * @b: a pointer
 * Return: the value of pointer
 */
char *_strcpy(char *a, char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		a[i] = b[i];
	}
	a[i] = '\0';
	return (a);
}
