#include <stdio.h>

/**
 * main - Entry point
 * A program that prints alphabet in lower case
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;
	char LETTER;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	for (LETTER = 'A' ; LETTER <= 'Z' ; LETTER++)
	{
		putchar(LETTER);
	}
	putchar('\n');

	return (0);
}
