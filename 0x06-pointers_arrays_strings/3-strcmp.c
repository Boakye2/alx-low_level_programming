#include "main.h"
/**
 * _strcmp - compares two strings
 * @a: first string
 * @b: second string
 * Return: the difference of between the strings
 */
int _strcmp(char *a, char *b)
{
	int i = 0;

	while (*(a + i) && *(b + i) && (*(a + i) == *(b + i)))
		i++;
	return (*(a + i) - *(b + i));
}
