#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - funct
 * @separator: var
 * @n: var
 * Return: the result
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *val;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(a, char*);
		if (val == 0)
			printf("(nil)");
		if (i == n - 1)
			printf("%s", val);
		if (n < n - 1)
		{
			if (separator != NULL)
				printf("%s%s", val, separator);
			else
				printf("%s", val);
		}
	}
	va_end(a);
	printf("\n");
}
