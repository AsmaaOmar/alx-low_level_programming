/**
 * print_numbers - print single digit numbers
 *
 * Description: print single digit numbers using char and putchar
 *
 * Return: Always 0 (Success)
 */
#include "main.h"
void print_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		_putchar(n);
		n++;
	}
	_putchar ('\n');

}
