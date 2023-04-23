/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 *
 */
#include<stdio.h>
int main(void)
{
	int n = 48;
	int m = 48;

	while (n < 58)
	{
		m = 48;
		while (m < 57)
		{
			int i = 48;
			int j = 48;
			i = n;
			j = m + 1;
			while (i < 58)
			{
			
			
				while (j < 58)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(i);
					putchar(j);
					if (n != 57 || m != 56 || i != 57 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
					j++;
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
