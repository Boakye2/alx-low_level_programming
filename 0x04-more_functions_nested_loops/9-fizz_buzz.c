#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the numbers from  to 0 to 100 with the restriction
 * Return: Always 0.
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0)
		{
			if (c % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if (c % 5 == 0)
		{
			if (c % 3 == 0)
				printf("FizzBuzz ");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", c);
	}
	return (0);
}
