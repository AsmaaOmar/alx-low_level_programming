/**
* main - Prints the alphabet except q and e.
*
* Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
