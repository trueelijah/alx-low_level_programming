#include "main.h"

/**
* print_sign - check the code
* @n: a function that prints the sign of a number
* Return: always 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1); /* Character is positive */
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0); /* Character is zero */
	}
	else /*(n < 0)*/
	{
		_putchar('-');
		return (-1); /* Character is negative */
	}

	return (0);
}
