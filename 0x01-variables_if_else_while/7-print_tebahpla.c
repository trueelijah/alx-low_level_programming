#include <stdio.h>

/**
 * main - Entry point
 * A program that prints lowercase alphabet in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
