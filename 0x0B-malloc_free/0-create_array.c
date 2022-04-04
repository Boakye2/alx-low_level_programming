#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - function
 * @c: char
 * Return: the result
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
