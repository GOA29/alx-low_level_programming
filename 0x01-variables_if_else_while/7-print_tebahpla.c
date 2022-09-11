#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = '2'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
