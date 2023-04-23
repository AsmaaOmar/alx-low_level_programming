/**
 * main - print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 *
 */
#include<stdio.h>
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
