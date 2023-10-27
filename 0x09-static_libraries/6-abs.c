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
		return (n); /* Character is positive */
	}
	else /*(n < 0)*/
	{
		return (-n); /* Character is negative */
	}

	return (0);
}
