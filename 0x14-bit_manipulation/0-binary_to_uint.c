#include "main.h"
/**
 * binary_to_uint - Function that converts a  binary number to an unsigned int
 * @b: a pointer
 * Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int mult = 1;
	int compt;

	if (b == NULL)
		return (0);
	for (compt = 0; b[compt]; compt++)
	{
		;
	}
	compt -= 1;
	for (; compt >= 0; compt--)
	{
		if (b[compt] != '0' && b[compt] != '1')
			return (0);
		result += (b[compt] - '0') * mult;
		mult *= 2;
	}
	return (result);
}

