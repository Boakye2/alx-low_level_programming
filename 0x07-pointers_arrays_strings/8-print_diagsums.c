#include <stdio.h>
/**
 * print_diagsums - prints diagonal sums
 * @a: integer
 * @s: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int s)
{
	int p, s1, s2, d1, d2, r;

	p = 0, s1 = 0, s2 = 0, d1 = 0, d2 = 0, r = 0;
	while (p < s * s)
	{
		if (p == d1 + (r * s))
			s1 += a[p];
		if (p == (s - d2 - 1) + (r * s))
			s2 += a[p];
		if (((p + 1) % s) == 0)
			r++, d1++, d2++;
		p++;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
