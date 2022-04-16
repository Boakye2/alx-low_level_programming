#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - funct
 * @name: val
 * @f: pointer
 * Return: the result
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
