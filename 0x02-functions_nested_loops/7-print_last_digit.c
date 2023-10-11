#include "main.h"

/**
* print_last_digit - check the code
* @number: a function that prints the last digit of a number
* Return: always 0
*/

int print_last_digit(int number)

{
	int last_digit;

	if (number < 0)
	{
		number = -number; /* Character is negative */
	}
	last_digit = number % 10;

	_putchar('0' + last_digit); /* Prints last digit */

	return (last_digit);
}
