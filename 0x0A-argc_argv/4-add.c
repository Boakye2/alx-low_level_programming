#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: count of args present
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

int change(int a)
{

}
