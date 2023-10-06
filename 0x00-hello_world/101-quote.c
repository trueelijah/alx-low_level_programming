#include <stdio.h>
#include <unistd.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 * main - prints the standrad error sandwiched around the  standard outpu/t
 *
 * Return: Always 1 (Exit code)
 * Return: returns 1
 */

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;
	while (message[i] != '\0')
    {
	    write(2, &message[i], 1);
	    i++;
    }
    return (1);
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}
