#include "main.h"
/**
 * _islower - Checkcs if caractere is lowercase
 * @c: the caractere
 * Return: 1 if carctere is lowercase , 0 other
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
