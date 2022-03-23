#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: integer array
 * @n: length of array a
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i, c;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		c = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = c;
		i++;
		n--;
	}
}
