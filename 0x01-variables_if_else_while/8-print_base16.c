#include<stdio.h>
#include<stdlib.h>

/**
 * main - Prints numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */

int main(void)
{

	int c;
	char h;

	for (c = 0; c < 10; c++)
		putchar('0' + c);

	for (h = 'a'; h <= 'f'; h++)
		putchar(h);

	putchar('\n');

	return (0);


}
