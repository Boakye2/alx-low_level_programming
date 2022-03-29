/**
 * _strstr - locates a substring
 * @h: string to search
 * @n: substring to find
 * Return: pointer
 */
char *_strstr(char *h, char *n)
{
	char *o, *t;

	if (!*n)
		return (h);
	while (*h)
	{
		if (*h == *n)
		{
			o = h;
			t = n;
			while (*t)
			{
				if (*h++ != *t++)
				{
					h = o;
					break;
				}
			}
			if (o != h)
				return (o);
		}
		h++;
	}
	return (0);
}

