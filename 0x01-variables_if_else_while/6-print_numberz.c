#include<stdio.h>
#include<stdlib.h>

/**
 * main - Prints numbers starting from 0 with twice putchar
 *
 * Return: Always 0.
 */

int main(void)
{

	int c;

	for (c = 0; c < 10; c++)
		putchar('0' + c);

	putchar('\n');

	return (0);


}
