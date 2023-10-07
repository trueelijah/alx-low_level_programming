#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all the number in base 16
 * Return: Always 0 (success)
 */

int main(void)
{
	char digit;

	for (digit = '0' ; digit <= '9' ; digit++)
	{
		putchar(digit);
	}
		for (digit = 'a' ; digit <= 'f' ; digit++)

	{
		putchar(digit);
	}
	putchar('\n');

	return (0);
}
