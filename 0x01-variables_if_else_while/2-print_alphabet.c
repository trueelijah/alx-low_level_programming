#include <stdio.h>

/**
 * main - Entry point
 * A program that prints alphabet in lovwer case
 * Return: Always 0 (success)
 */

int main(void)
{
char letter;

for (letter = 'a' ; letter <= 'z' ; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
