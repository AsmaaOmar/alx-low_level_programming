/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
