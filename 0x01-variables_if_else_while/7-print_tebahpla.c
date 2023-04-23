/**
 * main - print reverse alphabit
 *
 * Description: print reverse alphabit
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

