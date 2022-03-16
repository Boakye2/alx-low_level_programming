#include "main.h"
/**
 * _isalpha - Checkcs if caractere is alphabetic
 * @c: the caractere
 * Return: 1 if carctere is alphabetic , 0 other
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
