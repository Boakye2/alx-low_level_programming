#include "main.h"
/**
 * _strpbrk - searches string
 * @s: string to check
 * @a: substring of chars
 * Return: pointer
 */
char *_strpbrk(char *s, char *a)
{
	int i;

	while (*s)
	{
		i = 0;
		while (*(a + i) != '\0')
		{
			if (*(a + i) == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
