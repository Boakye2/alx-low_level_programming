#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - funct
 * @d: struct
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
