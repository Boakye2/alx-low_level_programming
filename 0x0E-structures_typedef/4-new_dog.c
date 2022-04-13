#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - funct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *c_name, *c_owner;
	unsigned int x, name_length = 0, owner_length = 0;

	new_name = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new_name);
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++)
		name_length++;
	for (x = 0; owner[x] != '\0'; x++)
		owner_length++;
	c_name = malloc(sizeof(char) * (name_length + 1));
	if (c_name == NULL)
		return (NULL);
	c_owner = malloc(sizeof(char) * (owner_length + 1));
	if (c_owner == NULL)
		return (NULL);
	for (x = 0; x <= name_length; x++)
		c_name[x] = name[x];
	for (x = 0; x <= owner_length; x++)
		c_owner[x] = owner[x];
	new_name->name = c_name;
	new_name->owner = c_owner;
	new_name->age = age;
	return (new_name);

}
