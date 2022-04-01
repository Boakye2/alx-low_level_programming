#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: count of args present
 * @argv: array
 * Return: o
 */
int main(int argc, char *argv[])
{
	int i, p = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		p += atoi(argv[i]);
	}
	printf("%d\n", p);
	return (0);
}
