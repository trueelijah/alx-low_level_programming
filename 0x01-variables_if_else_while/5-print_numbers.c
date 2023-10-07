#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all single digit number
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)

	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
