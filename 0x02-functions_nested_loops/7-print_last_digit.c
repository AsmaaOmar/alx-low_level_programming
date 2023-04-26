/**
 * print_last_digit - checks for the last digit.
 * @l: The character to print
 * Return: On success 1.
 */
#include "main.h"
int print_last_digit(int l)
{
	int n;
	
	if (l < 0)
		l = -l;
	n = l % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
