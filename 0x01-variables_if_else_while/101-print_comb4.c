/**
 * main - prints all possible combinations of three digits.
 *
 * Return: Always 0 (Success)
 *
 */
#include<stdio.h>
int main(void)
{
	int n = 48;

	while (n < 56)
	{
		int m = 49;

		m = n + 1;
		while (m < 57)
		{
			int i = 50;

			i = m + 1;
			while (i < 58)
			{
				putchar(n);
				putchar(m);
				putchar(i);
				if (n != 55 || m != 56 || i != 57)
				{
					putchar(',');
					putchar(' ');
				}
				i++;

			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
