/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers using char and putchar
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);


}
