#include "main.h"

/**
* _islower - _islower
* @c: a function that checks for lowercase character
* A program that prints alphabet
* Return: always 0 (success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* Character is lowercase */
	}
	else
	{
		return (0); /* Character is not lowercase */
	}
}
