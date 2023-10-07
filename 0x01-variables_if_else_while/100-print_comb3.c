#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit;
	int digit1;

	for (digit = '0' ; digit <= '9' ; digit++)
		for (digit1 = digit + 1 ; digit1 <= '9' ; digit1++)

	{
		putchar(digit);
		putchar(digit1);

		if (digit != 8 || digit1 != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
