#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @r: print from this number
 */
void print_to_98(int r)
{
	int n, m;

	if (r <= 98)
	{
		for (n = r; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else if (n == 98)
				printf("%d\n", n);
		}
	} else if (r >= 98)
	{
		for (m = r; m >= 98; m--)
		{
			if (m != 98)
				printf("%d, ", m);
			else if (m == 98)
				printf("%d\n", m);
		}
	}
}

