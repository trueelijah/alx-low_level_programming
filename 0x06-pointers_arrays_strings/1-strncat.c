#include "main.h"

/**
 * _strncat - Concatenates at most n bytes of src to dest.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * An: The maximum number of bytes to be appended from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);
}
