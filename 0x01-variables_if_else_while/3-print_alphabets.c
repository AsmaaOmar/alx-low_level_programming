/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
	int c = 97;
	int C = 65;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	while (C < 91)
	{
		putchar(C);
		C++;
	}
	putchar(10);
	return (0);

}
