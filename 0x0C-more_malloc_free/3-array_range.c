#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - function
 * @min: min
 * @max: max
 * Return: the result
 */
void *array_range(int min, int max)
{
	char *ptr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min;
	ptr = malloc(sizeof(int) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		ptr[i] = min++;
	return (ptr);
}
