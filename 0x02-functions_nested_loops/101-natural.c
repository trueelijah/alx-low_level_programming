#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
*/

int main(void)
{
	int limit = 1024;

	int i = 0;

	int sum = 0;

	for (i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
