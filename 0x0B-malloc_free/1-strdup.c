#include <stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, e;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (e = 0; e <= *str; e++)
	{
	}
	e += 1;
	ptr = malloc(sizeof(char) * e);

	for (i = 0; i < e; i++)
		ptr[i] = str[i];
	
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
