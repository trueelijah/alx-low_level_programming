#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all the number in base 16
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit;

	for (digit = '0' ; digit <= '9' ; digit++)
	{
		putchar(digit);

		if (digit < '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
