#include <stdio.h>
/**
 * main - Entry point
 * @argc: count of args present
 * @argv: array
 * Return: o
 */
int main(int argc, char *argv[])
{
	if (!*argv)
		return (-1);
	printf("%d\n", argc - 1);
	return (0);
}
