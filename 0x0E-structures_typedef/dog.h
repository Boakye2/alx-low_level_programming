#ifndef DOG_H
#define DOG_H
/**
 * struct dog - funct
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void printf_dog(struct dog *d);
dog *new_dog(char *name, float age, char *owner);
void free_dog(dog *d);
#endif /* DOG_H*/