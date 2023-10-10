#include "main.h"

/**
* _isalpha - check the code
* @c: a function that checks for alphabetic character
* Return: always 0 (success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* Character is letter */
	}
	else
	{
		return (0); /* Character is not letter */
	}
}
