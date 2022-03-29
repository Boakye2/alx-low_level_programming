/**
 * _memset - fills n bytes of memory
 *
 * @s: a pointer
 * @b: constant
 * @n: num bytes
 *
 * Return : pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned in i = 0;
	char *beg = s;
	
	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (beg);
}
