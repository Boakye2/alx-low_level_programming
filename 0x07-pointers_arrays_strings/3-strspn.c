#include "main.h"
/**
 * _strspn - find length of prefix substring
 * @s: string to check
 * @a: substring of char
 * Return: n bytes in intial segment of s
 */
unsigned int _strspn(char *s, char *a)
{
	int i;
	int c;
	int p;

	while (*s)
	{
		i = 0;
		p = c;
		while (*(a + i) != '\0')
		{
			if (*(a + i) == *s)
				c++;
			i++;
		}
		if (p == c)
			break;
		s++;
	}
	return (c);
}
