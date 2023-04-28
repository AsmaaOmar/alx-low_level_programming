#include "main.h"
/**
 * _isdigit - checks for lowercase character.
 * @c: The character to print
 * Return: On success 1.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
