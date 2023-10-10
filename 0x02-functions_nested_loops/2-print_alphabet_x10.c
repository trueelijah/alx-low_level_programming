#include "main.h"

/**
* print_alphabet - Entry point
* A program that prints alphabet
* Return: always 0 (success)
*/

void print_alphabet(void)

{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	}
}
