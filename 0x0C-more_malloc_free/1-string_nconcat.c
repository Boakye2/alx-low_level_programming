#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function
 * @s1: var
 * @s2: var
 * @n: number
 * Return: the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, a, b, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (a = 0; s2[a] != '\0'; a++)
	{
	}

	if (n < a)
		a = n;
	a += 1;
	ptr = malloc(sizeof(char *) * (a + 1));
	if (ptr == NULL)
		return (NULL);
	for (b = 0; b < i; b++)
		ptr[b] = s1[b];
	for (c = 0; c < a; c++)
	{
		ptr[b] = s2[c];
		b++;
	}
	b++;
	ptr[b] = '\0';
	return (ptr);
}
