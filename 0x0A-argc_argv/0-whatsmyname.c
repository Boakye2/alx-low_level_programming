#include <stdio.h>
/**
 * main - Entry point
 * @argc: count of args present
 * @argv: array
 * Return: o
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
		return (-1);
	printf("%s\n", argv[0]);
	return (0);
}
