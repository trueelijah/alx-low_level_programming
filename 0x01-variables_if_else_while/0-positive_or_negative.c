#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Positive anything is better than negative nothing */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d/n", n);
	}

	else if (n == 0)
	{
		printf("%d/n", n);
	}

else
	{
		printf("%d/n", n);

	return (0);
}
