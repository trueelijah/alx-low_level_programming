#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 * A program that generates the last digit
 * Return: Always 0 (success)
 */
int main(void)

{
	int n;
	int Ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	Ld = n % 10;

	printf("Last digit of %d is %d", n, Ld);

	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("and is 0\n");
	}
	if (n < 6 && !0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}