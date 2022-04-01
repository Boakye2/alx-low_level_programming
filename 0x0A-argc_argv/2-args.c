#include <stdio.h>
/**
 * main - Entry point
 * @argc: count of args present
 * @argv: array
 * Return: o
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
