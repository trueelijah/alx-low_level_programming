#include "main.h"

/**
* _isalpha - _isalpha
* @c: a function that checks for alphabetic character
* A program that prints alphabet
* Return: always 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* Character is letter */
	}
	else
	{
		return (0); /* Character is not letter */
	}
}
