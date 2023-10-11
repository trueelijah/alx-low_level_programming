#include "main.h"

/**
* _abs - check the code
* @n: a function that computes the absolute vaule of integer
* Return: always 0
*/

int _abs(int n)

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
