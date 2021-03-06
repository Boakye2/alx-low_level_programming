#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - funct
 * @array: val
 * @size: val
 * @action: val
 * Return: the result
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i = 0;

		while (i < size)
		{
			(action)(array[i]);
			i++;
		}
	}
}
