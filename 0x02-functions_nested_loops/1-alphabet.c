#include "main.h"

/**
 * main - 
 * A program that prints alphabet
 * Return: always 0 (success)
 */
int main(void)

{
	char letter;
	for (letter = 'a', letter <= 'z', letter++);
	{
		putchar(letter);
	}
	putchar(\n);

	return (0);
}
