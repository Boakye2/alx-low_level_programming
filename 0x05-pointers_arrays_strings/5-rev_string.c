#include "main.h"
/**
 * rev_string - rev the string
 * @s: string
 */
void rev_string(char *s)
{
	char *a = s;
	char n[1000];
	short b = 0;

	while (*s != '\0')
	{
		n[b] = *s;
		s++;
		b++;
	}
	c = 0;
	while (s > a)
	{
		s--;
		*s = n[b];
		b++;
	}
}
