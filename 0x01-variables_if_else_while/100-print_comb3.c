/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 *
 */
#include<stdio.h>
int main(void)
{
	int n = 48;
	int m = 49;

	while (n < 57)
	{
		m = n + 1;
		while (m < 58)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
