#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat two string
 * @s1: a string
 * @s2: a string
 * Return: the result
 */
char *str_concat(char *s1, char *s2)
{
	int e1, e2, i = 0;
	char *ptr;


	for (e1 = 0; e1 <= *s1; e1++)
	{
	}
	for (e2 = 0; e2 <= *s2; e2++)
	{
	}
	ptr = malloc(sizeof(char) * (e1 + e2 + 1));
	if (ptr == NULL)
		return (NULL);
	while (*s1)
	{
		ptr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		ptr[i] = *s2;
		i++;
		s2++;
	}
	return (ptr);
}
