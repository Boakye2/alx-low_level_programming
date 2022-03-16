#include <stdio.h>

/**
 *  main - prints all the natural numbers below 1024 that are multiples
 *    of  3 or 5
 *  Return: always 0
 */
int main(void)
{
	int c, d = 0;

	for (c = 0; c < 1024; c++)
	{
		if ((c % 3) == 0 || (c % 5) == 0)
			d += c;
	}

	printf("%d\n", d);

	return (0);
}
