#include "main.h"

/**
* _abs - check the code
* int: a function that computes the absolute vaule of integer
* Return: always 0
*/

int _abs(int)
{
	if (n > 0)
	{
		_putchar('+');
		return (+1); /* Character is positive */
	}
	else /*(n < 0)*/
	{
		_putchar('-');
		return (-1); /* Character is negative */
	}

	return (0);
}
