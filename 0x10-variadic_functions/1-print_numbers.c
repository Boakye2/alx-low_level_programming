#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - funct
 * @separator: var
 * @n: var
 * Return: the result
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int val;

	if (separator == NULL)
		separator = "";
	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(a, unsigned int);
		if (i < n - 1)
			printf("%d%s", val, separator);
		if (i == n - 1)
			printf("%d", val);
	}
	printf("\n");
	va_end(a);
}
