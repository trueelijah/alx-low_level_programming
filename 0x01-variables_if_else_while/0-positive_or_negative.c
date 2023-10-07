#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * A program that assign a random number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d/n", n);

	if (n > 0)
	{
		printf("is positive");
	}

	else if (n == 0)
	{
		printf("is zero");
	}

	else
	{
		printf("is negative");
	}

	return (0);
}
